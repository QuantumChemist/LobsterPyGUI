#include <iostream>
#include <sstream>
#include <cstdlib> 
#include <gtk/gtk.h>

// let's see what's left of the c++ skills...
// compile with g++ -o lobsterpygui src/main.cpp $(pkg-config --cflags --libs gtk+-3.0)

// Callback function for the button click event
void on_button_clicked(GtkWidget *widget, gpointer data) 
{
    const char* command = static_cast<const char*>(data);
    const char* subplotdos = "plotdos";
    std::string element;
    char tmp[100];
    if (strstr(command, subplotdos) != NULL) 
    {
	g_print("Enter element: "); 
	std::cin >> element;
	strcpy(tmp, command);
	strcat(tmp, " --element ");
        strcat(tmp, element.c_str());
	command = tmp;
    }
    g_print("%s\n", command);
    std::system(command);
    g_print("finished\n");
}


int main(int argc, char *argv[])
{
    std::cout << "LobsterPyGUI written by Christina Ertural (currently in a very basic mode)" << std:: endl;

    // Initialize GTK+
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "LobsterPyGUI Prototype");
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_container_add(GTK_CONTAINER(window), box);

    // Create a button and connect it to the callback function
    const char* button_commands[] = 
    {
        "lobsterpy createinputs",
        "lobsterpy autoplot",
	"lobsterpy plotdos",
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
