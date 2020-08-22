#include<stdio.h>
#include<conio.h>
int main ()
{
	int i;
 char a[30];
 printf("ENTER YOUR NAME\n");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 switch(a[i])
 {
 	case ' ':
 	{
	 printf("\n\n\n\n\n");
	 break;	
 }
 	case'A':
 	printf("       *    \n");
 	printf("      * *   \n");
 	printf("     * * *   \n");
 	printf("    * *** *   \n");
 	printf("   * ***** *   \n");
 	printf("  ***********   \n");
 	printf("  *         *   \n");
	printf("  *         *   \n");
	printf("  *         *   \n");
	printf("  *         *   \n");
	printf("\n\n");
	 break;
	case'B':
	printf("  *****\n");
	printf("  **   *\n");
	printf("  **    *\n");
	printf("  **   *\n");
	printf("  *****\n");
	printf("  **   *\n");
	printf("  **    *\n");
	printf("  **   *\n");
	printf("  *****\n");
	printf("\n\n");
	 break;
	case'C':
	printf("    ******\n");
	printf("   **     *\n");
	printf("  **       *\n");
	printf(" **    \n");
	printf(" **   \n");
	printf(" **       \n");
	printf("  **       *\n");
	printf("   **     *\n");
	printf("    ******\n");
	printf("\n\n");
	 break;
	case'D':
	printf("  *****\n");
	printf("  *   **\n");
	printf("  *    **\n");
	printf("  *     **\n");
	printf("  *     **\n");
	printf("  *    **\n");
	printf("  *   **\n");
	printf("  *****\n");
	printf("\n\n");
	 break;
	case'E':
	printf(" ********\n");
	printf(" **     \n");
	printf(" **       \n");
	printf(" **    \n");
	printf(" *****   \n");
	printf(" **       \n");
	printf(" **       \n");
	printf(" **     \n");
	printf(" ********\n");
	printf("\n\n");
	 break;
	case'F':
	printf(" ********\n");
	printf(" **     \n");
	printf(" **       \n");
	printf(" ******   \n");
	printf(" **       \n");
	printf(" **       \n");
	printf(" **     \n");
	printf(" **\n");
	printf("\n\n");
 break;
	case'G':
	printf("    ******\n");
	printf("   **     *\n");
	printf("  **       *\n");
	printf(" **   \n ");
	printf("**     ******\n");
	printf(" **     **  *\n");
	printf("  **       *\n");
	printf("   **     *\n");
	printf("    ******\n");
	printf("\n\n");
	 break;
	case'H':
	printf("  **     **\n");
	printf("  **     **\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("  *********\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("\n\n");
	 break;
	case'I':
	printf("  *******\n");
	printf("  *******\n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf(" *******\n");
	printf("  *******\n");
	printf("\n\n");
	 break;
	case'J':
	printf("***********\n");
	printf("  *******\n");
	printf("     * \n ");
	printf("    * \n ");
	printf("    * \n ");
	printf("*   * \n ");
	printf(" *  * \n ");
	printf("  ** \n");
	printf("\n\n");
	 break;
	case'K':
	printf("  ** \n ");
	printf(" ** \n  ");
	printf("** \n ");
	printf(" **   *\n");
	printf("  **  *\n");
	printf("  ** *\n");
	printf("  ***\n");
	printf("  ** *\n");
	printf("  **  *\n");
	printf("  **   *\n");													
	printf("\n\n");
	 break;
	case'L':
	printf(" **\n");
	printf(" **     \n");
	printf(" **       \n");
	printf(" **   \n");
	printf(" **   \n");
	printf(" **      \n");
	printf(" **       \n");
	printf(" *********\n");
	printf(" *********\n");
	printf("\n\n");
	 break;
	case'M':
	printf("  *         **\n");
	printf("  **       ***\n");
	printf("  * *     * **\n");
	printf("  *  *   *  **\n");
	printf("  *   * *   **\n");
	printf("  *    *    **\n");
	printf("  *         **\n");
	printf("  *         **\n");
	printf("  *         **\n");
	printf("\n\n");
	 break;
	
	case'N':
	printf("  *         **\n");
	printf("  **        **\n");
	printf("  * *       **\n");
	printf("  *  *      **\n");
	printf("  *   *     **\n");
	printf("  *    *    **\n");
	printf("  *     *   **\n");
	printf("  *      *  **\n");
	printf("  *       * **\n");
	printf("  *        ***\n");
	printf("\n\n");
	 break;
	case'O':
	printf("    ******\n");
	printf("   **    **\n");
	printf("  **      **\n");
	printf(" **        **\n");
	printf(" **        **\n");
	printf(" **        **\n ");
	printf(" **      **\n");
	printf("   **    **\n");
	printf(".   ******\n");
	printf("\n\n");
	 break;
	case'P':
	printf("  *******\n");
	printf("  **     *\n");
	printf("  **      *\n");
	printf("  **     *\n");
	printf("  *******\n");
	printf("  **      \n");
	printf("  **      \n");
	printf("  **      \n");
	printf("  **      \n");
	printf("\n\n");
	 break;
	
	case'Q':
	printf("    *****\n");
	printf("   **   **\n");
	printf("  **     **\n");
	printf(" **       **\n");
	printf(" *         **\n");
	printf(" **  **   **\n ");
	printf(" **  ** **\n");
	printf("   **  ***\n");
	printf("    ******\n");
	printf("        **\n");
	printf("         **\n");
	printf("\n\n");
	 break;
	case'R':
	printf("  *******\n");
	printf("  **     *\n");
	printf("  **      *\n");
	printf("  **     *\n");
	printf("  *******\n");
	printf("  **    \n");
	printf("  ** *    \n");
	printf("  **   *  \n");
	printf("  **     * \n");
	printf("\n\n");
	 break;
	case'S':
	printf("     *****\n");
	printf("    **   **\n");	
	printf("   **     **\n");
	printf("    **\n");	
	printf("     *****\n");
    printf("         **\n");	
    printf("   **     **\n");
	printf("    **   **\n");		
    printf("     *****\n");	
	printf("\n\n");
	 break;
	case'T':
	printf("***********\n");
	printf("  *******\n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n");
	printf("\n\n");
	 break;
	case'U':
	printf(" **        **\n");	
	printf(" **        **\n");
	printf(" **        **\n");
	printf(" **        **\n ");
	printf(" **      **\n");
	printf("   **    **\n");
	printf("    ******\n");
	printf("\n\n");
	 break;
	case'V':
	printf("              ****    \n    ");
	printf("          *** \n");
	printf("  **         **\n");
	printf("   **       **\n");
	printf("    **     **\n ");
	printf("    **   **\n");
	printf("      ** **\n");
	printf("       ***\n");
	printf("\n\n");
	 break;
	case'W':
	printf("                            *******\n");
	printf("                           *****\n");
	printf("****                       **\n");
	printf("**                       ** \n ");
	printf(" **        *****        **\n");
	printf("   **        ***        **\n");
	printf("    **      ** **      **\n");
	printf("     **    **   **    **\n");
	printf("      **  **     **  **\n");
	printf("       ****       ****\n");
	printf("        **         **\n");
	printf("\n\n");
	 break;
	case'X':
	printf("            ****\n");
	printf("             *\n");
	printf("            *\n");
	printf("  **       *\n");
	printf("   **     *\n");
	printf("    **   *\n");
	printf("     ** *\n");
	printf("      **\n");
	printf("     ** *\n");
	printf("    **   *\n");
	printf("   **     *\n");
	printf("  **       *\n");
	printf("\n\n");
	 break;
	
	case'Y':
	printf("            ****\n");
	printf("             *\n");
	printf("            *\n");
	printf(" **        *\n");
	printf("   **     *\n");
	printf("    **   *\n");
	printf("     ** *\n");
	printf("      **\n");
	printf("      **\n");
	printf("      **\n");
	printf("      **\n");
	printf("      **\n");
	printf("\n\n");
	 break;
	case'Z':
	printf(" *********\n");
	printf("         *\n");
	printf("       *\n");
	printf("     *\n");
	printf("    *\n");
	printf("  *\n");
	printf(" *\n");
	printf("**********\n");
	printf("**********\n");
    printf("\n\n");
     break;
     
     	case'a':
 	printf("       *    \n");
 	printf("      * *   \n");
 	printf("     * * *   \n");
 	printf("    * *** *   \n");
 	printf("   * ***** *   \n");
 	printf("  ***********   \n");
 	printf("  *         *   \n");
	printf("  *         *   \n");
	printf("  *         *   \n");
	printf("  *         *   \n");
	printf("\n\n");
	 break;
	case'b':
	printf("  *****\n");
	printf("  **   *\n");
	printf("  **    *\n");
	printf("  **   *\n");
	printf("  *****\n");
	printf("  **   *\n");
	printf("  **    *\n");
	printf("  **   *\n");
	printf("  *****\n");
	printf("\n\n");
	 break;
	case'c':
	printf("    ******\n");
	printf("   **     *\n");
	printf("  **       *\n");
	printf(" **    \n");
	printf(" **   \n");
	printf(" **       \n");
	printf("  **       *\n");
	printf("   **     *\n");
	printf("    ******\n");
	printf("\n\n");
	 break;
	case'd':
	printf("  *****\n");
	printf("  *   **\n");
	printf("  *    **\n");
	printf("  *     **\n");
	printf("  *     **\n");
	printf("  *    **\n");
	printf("  *   **\n");
	printf("  *****\n");
	printf("\n\n");
	 break;
	case'e':
	printf(" ********\n");
	printf(" **     \n");
	printf(" **       \n");
	printf(" **    \n");
	printf(" *****   \n");
	printf(" **       \n");
	printf(" **       \n");
	printf(" **     \n");
	printf(" ********\n");
	printf("\n\n");
	 break;
	case'f':
	printf(" ********\n");
	printf(" **     \n");
	printf(" **       \n");
	printf(" ******   \n");
	printf(" **       \n");
	printf(" **       \n");
	printf(" **     \n");
	printf(" **\n");
	printf("\n\n");
 break;
	case'g':
	printf("    ******\n");
	printf("   **     *\n");
	printf("  **       *\n");
	printf(" **   \n ");
	printf("**     ******\n");
	printf(" **     **  *\n");
	printf("  **       *\n");
	printf("   **     *\n");
	printf("    ******\n");
	printf("\n\n");
	 break;
	case'h':
	printf("  **     **\n");
	printf("  **     **\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("  *********\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("  **      *\n");
	printf("\n\n");
	 break;
	case'i':
	printf("  *******\n");
	printf("  *******\n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf(" *******\n");
	printf("  *******\n");
	printf("\n\n");
	 break;
	case'j':
	printf("***********\n");
	printf("  *******\n");
	printf("     * \n ");
	printf("    * \n ");
	printf("    * \n ");
	printf("*   * \n ");
	printf(" *  * \n ");
	printf("  ** \n");
	printf("\n\n");
	 break;
	case'k':
	printf("  ** \n ");
	printf(" ** \n  ");
	printf("** \n ");
	printf(" **   *\n");
	printf("  **  *\n");
	printf("  ** *\n");
	printf("  ***\n");
	printf("  ** *\n");
	printf("  **  *\n");
	printf("  **   *\n");													
	printf("\n\n");
	 break;
	case'l':
	printf(" **\n");
	printf(" **     \n");
	printf(" **       \n");
	printf(" **   \n");
	printf(" **   \n");
	printf(" **      \n");
	printf(" **       \n");
	printf(" *********\n");
	printf(" *********\n");
	printf("\n\n");
	 break;
	case'm':
	printf("  *         **\n");
	printf("  **       ***\n");
	printf("  * *     * **\n");
	printf("  *  *   *  **\n");
	printf("  *   * *   **\n");
	printf("  *    *    **\n");
	printf("  *         **\n");
	printf("  *         **\n");
	printf("  *         **\n");
	printf("\n\n");
	 break;
	
	case'n':
	printf("  *         **\n");
	printf("  **        **\n");
	printf("  * *       **\n");
	printf("  *  *      **\n");
	printf("  *   *     **\n");
	printf("  *    *    **\n");
	printf("  *     *   **\n");
	printf("  *      *  **\n");
	printf("  *       * **\n");
	printf("  *        ***\n");
	printf("\n\n");
	 break;
	case'o':
	printf("    ******\n");
	printf("   **    **\n");
	printf("  **      **\n");
	printf(" **        **\n");
	printf(" **        **\n");
	printf(" **        **\n ");
	printf(" **      **\n");
	printf("   **    **\n");
	printf(".   ******\n");
	printf("\n\n");
	 break;
	case'p':
	printf("  *******\n");
	printf("  **     *\n");
	printf("  **      *\n");
	printf("  **     *\n");
	printf("  *******\n");
	printf("  **      \n");
	printf("  **      \n");
	printf("  **      \n");
	printf("  **      \n");
	printf("\n\n");
	 break;
	
	case'q':
	printf("    *****\n");
	printf("   **   **\n");
	printf("  **     **\n");
	printf(" **       **\n");
	printf(" *         **\n");
	printf(" **  **   **\n ");
	printf(" **  ** **\n");
	printf("   **  ***\n");
	printf("    ******\n");
	printf("        **\n");
	printf("         **\n");
	printf("\n\n");
	 break;
	case'r':
	printf("  *******\n");
	printf("  **     *\n");
	printf("  **      *\n");
	printf("  **     *\n");
	printf("  *******\n");
	printf("  **    \n");
	printf("  ** *    \n");
	printf("  **   *  \n");
	printf("  **     * \n");
	printf("\n\n");
	 break;
	case's':
	printf("     *****\n");
	printf("    **   **\n");	
	printf("   **     **\n");
	printf("    **\n");	
	printf("     *****\n");
    printf("         **\n");	
    printf("   **     **\n");
	printf("    **   **\n");		
    printf("     *****\n");	
	printf("\n\n");
	 break;
	case't':
	printf("***********\n");
	printf("  *******\n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n ");
	printf("    * \n");
	printf("     * \n");
	printf("\n\n");
	 break;
	case'u':
	printf(" **        **\n");	
	printf(" **        **\n");
	printf(" **        **\n");
	printf(" **        **\n ");
	printf(" **      **\n");
	printf("   **    **\n");
	printf("    ******\n");
	printf("\n\n");
	 break;
	case'v':
	printf("              ****    \n    ");
	printf("          *** \n");
	printf("  **         **\n");
	printf("   **       **\n");
	printf("    **     **\n ");
	printf("    **   **\n");
	printf("      ** **\n");
	printf("       ***\n");
	printf("\n\n");
	 break;
	case'w':
	printf("                            *******\n");
	printf("                           *****\n");
	printf("****                       **\n");
	printf("**                       ** \n ");
	printf(" **        *****        **\n");
	printf("   **        ***        **\n");
	printf("    **      ** **      **\n");
	printf("     **    **   **    **\n");
	printf("      **  **     **  **\n");
	printf("       ****       ****\n");
	printf("        **         **\n");
	printf("\n\n");
	 break;
	case'x':
	printf("            ****\n");
	printf("             *\n");
	printf("            *\n");
	printf("  **       *\n");
	printf("   **     *\n");
	printf("    **   *\n");
	printf("     ** *\n");
	printf("      **\n");
	printf("     ** *\n");
	printf("    **   *\n");
	printf("   **     *\n");
	printf("  **       *\n");
	printf("\n\n");
	 break;
	
	case'y':
	printf("            ****\n");
	printf("             *\n");
	printf("            *\n");
	printf(" **        *\n");
	printf("   **     *\n");
	printf("    **   *\n");
	printf("     ** *\n");
	printf("      **\n");
	printf("      **\n");
	printf("      **\n");
	printf("      **\n");
	printf("      **\n");
	printf("\n\n");
	 break;
	case'z':
	printf(" *********\n");
	printf("         *\n");
	printf("       *\n");
	printf("     *\n");
	printf("    *\n");
	printf("  *\n");
	printf(" *\n");
	printf("**********\n");
	printf("**********\n");
    printf("\n\n");
     break;
}
 }
}
