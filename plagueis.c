/*******************************************************************/
/*  WinFutureX presents - Plagueis (or Reach the Man) version 1.1  */
/*******************************************************************/
/* please subscribe to r/chinese_bootleg_memes thank you very much */
/*******************************************************************/

/* this was just an exercise in C programming */

#include <stdio.h>

int main()
{
	printf ("\nWinFutureX PRESENTS - PLAGUEIS / REACH THE MAN v1.1\n\n");
	printf ("Did you ever hear the tragedy of Darth Plagueis the wise?\n");
	printf ("(Please answer with 'Y', 'N' or 'B'.)\n");
	char answer;
	scanf ("%c", &answer);
	if (answer == 'Y' || answer == 'y')
	{
		/* prequel memer */
		printf ("\nWe will watch your career with great interest.\n\n");
	}
	else if (answer == 'N' || answer == 'n')
	{
		/* normie */
		printf ("\nI thought not. It's not a story the Jedi would tell you. It's a Sith legend.\n");
		printf ("Darth Plagueis was a Dark Lord of the Sith, so powerful and so wise he could\n");
		printf ("use the Force to influence the midichlorians to create life... He had such a\n");
		printf ("knowledge of the dark side that he could even keep the ones he cared about from\n");
		printf ("dying. The dark side of the Force is a pathway to many abilities some consider\n");
		printf ("to be unnatural. He became so powerful... the only thing he was afraid of was\n");
		printf ("losing his power, which eventually, of course, he did. Unfortunately, he taught\n");
		printf ("his apprentice everything he knew, then his apprentice killed him in his sleep.\n");
		printf ("Ironic. He could save others from death, but not himself.\n\n");
	}
	else if (answer == 'B' || answer == 'b')
	{
		/* backstroke */
		printf ("\nDid you heard of the tragedy that reach the man? I think to be too is not.\n");
		printf ("I think that the hopeless situation elder also can't. That is a legend.\n");
		printf ("Reaching the man cloth space is the emperor. He is so strong and big he even\n");
		printf ("use the original dint to create life. He is very deep to black influence\n");
		printf ("understanding. The black influence can the matter that many supermans. But\n");
		printf ("other people thinks that these are what can't attains. He become more and\n");
		printf ("more strong and big. Lost his power afterwards afterwards he died. In fact he\n");
		printf ("teaches own the whole skills all to disciple. Then his land killed him to let\n");
		printf ("him going to bed. Satirizing the meaning is he can let other people, but is\n");
		printf ("incapable for dint to the oneself.\n\n");
	}
	else
	{
		/* he's too dangerous to be left alive! */
		printf ("\nSo uncivilised.\n\n");
		//fflush (stdin);	/* clean stdin */
		//getchar();	/* wait for input */
		//return 1;
	}
	printf ("Press Enter to continue...\n");
	fflush (stdin);	/* clean stdin */
	getchar(); /* wait for input */
	return 0;
}
