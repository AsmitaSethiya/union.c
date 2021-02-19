# union.c

The union is a user-defined data type in C.
It is used to store a collection of different kinds of data.

A union can store information in only one member variable at a time.

we can use union instead of structure to save the memory.


for example:

struct Student{
      int id;                      // 2 bytes
      char name[20];               // 20 bytes 
      float fees;                  // 4 bytes
      
      
                                    // memory allocate  = 26 bytes
}




union Student{
            int id;                         // 2 bytes            
            char name[20];                  // 20 bytes
            float fees;                     // 4 bytes  
            
            // memory allocate = 20 bytes(highest between all 3 variables bytes)
}


Note: in a union, at a time only one member variable can contain a valid value so it's necessary to use variable immediate after assigning in a value.  Otherwise we get unexpected output


