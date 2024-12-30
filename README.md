# Student-Database-Management-System

Project Goal:
   * Create an executable file named "student" that manages student records.

Main Menu:
   * The executable file will present a menu with the following options:
   * a/A: Add a new record
   * d/D: Delete a record
   * m/M: Modify a record
   * s/S: Show the list of records
   * v/V: Save the records
   * e/E: Exit
   * t/T: Delete all records
   * l/L: Sort the list
   * r/R: Reverse the list
     
stud_add.c 
   * This module will be responsible for adding new student records.
   * It will contain a function stud_add that is called when the user selects the "Add" option from the menu.
   * This function will dynamically create a new block of memory to store the student's information (rollno, name, percentage).
   * Link this new block into a singly linked list to manage the records.
   * Automatically assign the next available roll number to the new student record.
   * Prompt the user to enter the student's name and percentage.
     
stud_del.c
   * This module will be responsible for deleting student records.
   * It will contain a function stud_del that is called when the user selects the "Delete" option from the menu.
   * This function will display a sub-menu to allow the user to delete records based on either roll number or name.
   * If multiple students have the same name, display all records with that name so the user can identify the specific roll number to delete.

stud_show.c:
   * Purpose: Displays the list of student records in a tabular format.
   * When the stud_show function is called, it should traverse the linked list of student records.
   * For each record, it should display the roll number, name, and percentage in a well-formatted table.
     
stud_mod.c:
   * The user is prompted to enter the roll number of the record they want to modify.
   * The system searches for the rExit Function
     
stud_save.c:
   *Saves the student records to a file.
   * The system creates a file named "student_data" to store the records.
   * The stud_save function traverses the linked list of records.
   * For each record, it writes the roll number, name, and percentage to the file in a suitable format.
   * The user is given options to save the records with or without sorting.
   * The user can also choose to delete all records before saving (option "r").
stud_exit.c:
   *The Exit function is responsible for gracefully terminating the program.
   *It ensures that any modifications or updates made to the student records are saved before the program exits.
   *This is critical because, without saving changes, any updates during the session would be lost.
   *When the Exit option is selected, the program:
   *Saves the current state of the student records (if any modifications have been made).
   *Closes all open files, releasing resources.
   *Exits the program, ensuring a smooth termination without data loss or memory issues.
   *This function also provides a safeguard by prompting the user to save the records if there were any changes since the last save. This step prevents accidental loss of data.

stud_sort.c:
   *The Sort function enables the user to organize student records in a specific order, either ascending or descending, based on a chosen field such as name, roll number, or course. 
   *Sorting is a fundamental operation in databases to make the data more readable and easier to navigate.
   *Prompts the user to select the field for sorting (e.g., name or roll number).
   *Applies a sorting algorithm (commonly Bubble Sort or Quick Sort) to reorder the records based on the selected field.
   *The sorted list of student records is then displayed to the user, ensuring the data is in the desired order.
   *This feature is useful in scenarios where users need to view the student data in a particular sequence (e.g., alphabetical order of names or numerical order of roll numbers).

stud_rev.c:

   *The Reverse function allows the user to invert the order of the student records. Unlike sorting, which arranges records based on specific fields, reversing simply flips the order of the existing records, either from first to last or last to first.
   *When the Reverse function is selected the program takes the current order of the student records.It reverses the order, changing the positions of the records so that the last record becomes the first and vice versa.
   *The reversed list is then displayed, allowing the user to view the student records in the opposite order.
   *This function can be useful when the user wants to see the records in the reverse order (e.g., to view the most recently added records at the top of the list) without having to sort them again.
     
In summary, these modules provide the core functionalities of displaying, modifying, and saving student records in the system.
