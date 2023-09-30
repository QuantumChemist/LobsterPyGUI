#include <iostream>
#include <gtk/gtk.h>

// let's see what's left of the c++ skills...

// Callback function for the button click event
void on_button_clicked(GtkWidget *widget, gpointer data) 
{
    g_print("LobsterPyGUI feature coming soon!!!\n");
}

int main(int argc, char *argv[])
{
    std::cout << "Hello LobsterPyGUI" << std:: endl;

    // Initialize GTK+
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "LobsterPyGUI Prototype");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a button and connect it to the callback function
    GtkWidget *button = gtk_button_new_with_label("Click Me!");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
    
    // Add the button to the window
    gtk_container_add(GTK_CONTAINER(window), button);

    // Show all elements in the window
    gtk_widget_show_all(window);

    // Start the GTK+ main loop
    gtk_main();

    return 0;
}
