#include <stdio.h>   /* required for file operations */



FILE *fr;            /* declare the file pointer */

void main()

{
   int n;
   long elapsed_seconds;
   char line[80];
  

   fr = fopen ("elapsed.txt", "rt");  /* open the file for reading */
   /* elapsed.dta is the name of the file */
   /* "rt" means open the file for reading text */

   while(fgets(line, 80, fr) != NULL)
   {
	 /* get a line, up to 80 chars from fr.  done if NULL */
	 sscanf (line, "%s", &elapsed_seconds);
	 /* convert the string to a long int */
	 printf ("%s\n", elapsed_seconds);
   }
   fclose(fr);  /* close the file prior to exiting the routine */
} /*of main*/
