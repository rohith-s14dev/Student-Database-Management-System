Student Database Management System 

Project outline:

The Student Database Management System is an application written in C that enables users to effectively handle student records, offering features to add, change, remove, and show student information. The system utilizes dynamic memory management through linked lists, allowing it to scale for different quantities of records. 

Characteristics:

Insert New Entry: Input a new student's roll number, name, and percentage into the database. 

Erase Record: Eliminate a student's record using their roll number or name. 

Edit Record: Change current student information (roll number, name, or percentage). 

Search Record: Look up students using their roll number, name, or percentage. 

Show Records: Show all student records saved in the database. 

Organize Records: Arrange records by name or percentage. 

Reverse List: Change the sequence of student records in the list. 

Remove All Entries: Erase the complete database. 

Store Records: Store student records in a file for later retrieval. 

Exit: Leave the system, with the option to save changes prior to exiting. 


Project Organization:

The project comprises several files for modular development: 

main.c: Houses the primary logic and user interface. 

header.h: A header file that includes function prototypes and definitions for data structures. 

add.c: Program for inserting new student data into the database. 

delete.c: Manages the removal of student records. 

save.c: Provides the capability to store student records in an external file. 

show.c: Presents the collection of student records that are stored. 

stud_mod.c: Manages the alteration of current student records. 

makefile: Streamlines the process of compiling and linking project files. 


File Breakdown:

main.c 

Includes the primary function and manages the menu along with user input. 

Invokes the relevant functions for each task (Add, Delete, Modify, etc.). 

header.h 

Specifies the structure of the SDB (Student Database). 

Includes all function prototypes. 


add.c 

Capability to create new student records by entering roll number, name, and percentage. 

remove.c 

Manages the removal of records based on either roll number or name. 

save.c

Stores the present list of student records in a file (student.xls) for later retrieval. 

display.c 

Presents the list of students, featuring each student's roll number, name, and percentage.

stud_mod.c 

Implements the logic for changing student information (name, roll number, or percentage). 

Includes features to look up and alter records based on roll number, name, or percentage. 

Essential Roles:

Add_new_record(): Inserts a new student entry into the database. 

Remove_record(): Removes a student record using roll number or name. 

Show_list(): Presents all records of students. 

Modify_record(): Updates a current record (name, roll number, or percentage). 

Save_record(): Stores the student database in an external file. 

Remove_all_entries(): Erases all entries from the database. 

Sort_list(): Organizes the student records based on name or percentage. 

Reverse_list(): Changes the sequence of the student records. 

Exit(): Closes the application, providing choices to save prior to exiting. 

Menu Selections:

Add New Record: Input the roll number, name, and percentage to include a new student in the database. 

Delete Record: Eliminate a student's record using their roll number or name. 

Display List: Present the list of every student. 

Revise Record: Alter a student’s roll number, name, or percentage. 

Store: Store the existing student records in a file. 

Sort: Organize the list of students either by name or by percentage. 

Invert: Change the sequence of the student records. 

Exit: Leave the system with the choice to save modifications. 


Project Workflow:

Users are able to input records containing student information (roll number, name, percentage). 

Change & Control: Users can effortlessly remove, alter, or find records. 

Store Information: The system enables the storage of student records in an external file. 

Show & Arrange: Users can access the records arranged by name or percentage. 

Exit: Offers a choice to save the data prior to leaving the application. 


Future Improvements:

Enhanced Search: Incorporate sophisticated searching using additional criteria. 

Mass Import/Export: Enable users to import/export student records in large quantities. 

Enhanced UI: A more straightforward and user-centric interface. 

