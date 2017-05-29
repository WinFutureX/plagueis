/* PLAGUEIS.C - a total r/prequelmemes disaster       */
/******************************************************/
/* "did you heard of the tragedy that reach the man?" */
/*                  -D the speaker, 2005 or something */
/* "you are already at full cock now"                 */
/*                  -allah gold, that same year       */
/*                                                    */
/* brought to you by STAR WAR the third gathers:      */
/* BACKSTROKE OF THE WEST                             */
/******************************************************/
#include <stdio.h>

int main()
{
	printf("Did you ever hear the tragedy of Darth Plagueis the wise?\n");
	printf("(Please answer with 'Y' or 'N'.)\n");
	char answer;
	scanf("%c", &answer);
	if (answer == 'Y' || answer == 'y')
	{
		printf("\nDarth Plagueis was a Dark Lord of the Sith, so powerful and so wise he could\n");
		printf("use the Force to influence the midichlorians to create life... He had such a\n");
		printf("knowledge of the dark side that he could even keep the ones he cared about from\n");
		printf("dying. The dark side of the Force is a pathway to many abilities some consider\n");
		printf("to be unnatural. He became so powerful... the only thing he was afraid of was\n");
		printf("losing his power, which eventually, of course, he did. Unfortunately, he taught\n");
		printf("his apprentice everything he knew, then his apprentice killed him in his sleep.\n");
		printf("Ironic. He could save others from death, but not himself.\n\n");
	}
	else if (answer == 'N' || answer == 'n')
	{
		printf("\nI thought not. It's not a story the Jedi would tell you. It's a Sith legend.\n");
		printf("Darth Plagueis was a Dark Lord of the Sith, so powerful and so wise he could\n");
		printf("use the Force to influence the midichlorians to create life... He had such a\n");
		printf("knowledge of the dark side that he could even keep the ones he cared about from\n");
		printf("dying. The dark side of the Force is a pathway to many abilities some consider\n");
		printf("to be unnatural. He became so powerful... the only thing he was afraid of was\n");
		printf("losing his power, which eventually, of course, he did. Unfortunately, he taught\n");
		printf("his apprentice everything he knew, then his apprentice killed him in his sleep.\n");
		printf("Ironic. He could save others from death, but not himself.\n\n");
	}
	else
	{
		printf("\nSo uncivilised.\n\n");
		return 1;
	}
	return 0;
}
