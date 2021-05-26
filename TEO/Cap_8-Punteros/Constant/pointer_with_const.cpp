/*
There are four ways to pass a pointer to a function:
• a nonconstant pointer to nonconstant data,
• a nonconstant pointer to constant data (Fig. 8.10),
• a constant pointer to nonconstant data (Fig. 8.11) and
• a constant pointer to constant data (Fig. 8.12).
Each combination provides a different level of access privilege.
*/

/*

8.6.1 Nonconstant Pointer to Nonconstant Data
The highest access is granted by a nonconstant pointer to nonconstant data:
• the data can be modified through the dereferenced pointer, and
• the pointer can be modified to point to other data.
Such a pointer’s declaration (e.g., int* countPtr ) does not include const .

*/