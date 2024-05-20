#include <iostream>
#include <sstream>
#include <cstdlib> 
#include <gtk/gtk.h>

// let's see what's left of the c++ skills...
// compile with g++ -o lobsterpygui src/main.cpp $(pkg-config --cflags --libs gtk+-3.0)
// May Bernhard's Klickibunti approach live on forever ~
// Callback function for the button click event, could put that in its own header main.hpp
void on_button_clicked(GtkWidget *widget, gpointer data) 
{
    const char* command = static_cast<const char*>(data);
    const char* subplot = "plot";
    int bond_num;
    char tmpp[100];
    if (strstr(command, subplot) != NULL) 
    {
	g_print("Enter bond number: "); 
	std::cin >> bond_num;
	std::string bond_num_str = " " + std::to_string(bond_num);
	strcpy(tmpp, command);
        strcat(tmpp, bond_num_str.c_str());
	command = tmpp;
    }
    g_print("%s\n", command);
    std::system(command);
    g_print("finished\n");
}

int main(int argc, char *argv[])
{
    std::cout << "LobsterPyGUI written by Christina Ertural for very beginners to get familiar with LOBSTER and LobsterPy!" << std:: endl;

    // Initialize GTK+
    gtk_init(&argc, &argv);
    GtkWidget *window;

    // Create the main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "LobsterPyGUI: Very basic LobsterPy features");
    //gtk_window_set_keep_above(GTK_WINDOW(window), TRUE);
    gtk_window_present (GTK_WINDOW (window));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_container_add(GTK_CONTAINER(window), box);

    // Create a button and connect it to the callback function
    const char* button_commands[] = 
    {
	"lobsterpy description",
	"lobsterpy calc-description",
	"lobsterpy autoplot",
	"lobsterpy autoplotia",
        "lobsterpy createinputs",
	"lobsterpy plot",
	"lobsterpy plot-icohps-distances",
	"lobsterpy plotdos"
        // Add more commands for additional buttons if needed
    };

    for (int i = 0; i < sizeof(button_commands) / sizeof(button_commands[0]); ++i) 
    {
	std::istringstream iss(button_commands[i]);
    	std::string lastWord;
	while (iss >> lastWord) {}
        GtkWidget *button = gtk_button_new_with_label(lastWord.c_str());
        g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), (gpointer)button_commands[i]);
        gtk_container_add(GTK_CONTAINER(box), button);
    }

    // Show all elements in the window
    gtk_widget_show_all(window);

    // Start the GTK+ main loop
    gtk_main();

    return 0;
}
