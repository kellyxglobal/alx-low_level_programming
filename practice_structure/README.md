This project is about structure in C. I made it in order to illustrate how structures in C works. A structure is a user define data typ basically use for grouping data items of different types into single type. DECLARING STRUCTURES: struct tag_name {data_types struct_members}variable_name; DEFINING STRUCTURE VARIABLES: After declaring a structure, you can define the structure variables for instance, struct automobile sedan, pick_up, sport_utility; All these three structure varaiblkes can contain four members of structure automobile as seen below. struct automobile { int year; char model[10]; int engine_power; float weight; } sedan, pick_up, sport_utility;   REFERENCING STRUCTURE MEMBERS: Given the structure automobile and the structure variable sedan, for instance, I can access its member, year, and assign an integer to it in the following way: sedan.year = 1997;  While the following statement assigns the start address of the character array of model, which is another member of the struct variable sedan, to a char pointer ptr: ptr = sedan.model;