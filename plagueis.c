/*  WinFutureX presents - Plagueis (or Reach the Man) version 1.1 (run from console!!) */
/*           please subscribe to r/chinese_bootleg_memes thank you very much           */

/*                             Copyright 2018 Kelsey Boey.                             */
/*   plagueis is licensed under the MIT license. See LICENSE for full license terms.   */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("\nWinFutureX PRESENTS - PLAGUEIS / REACH THE MAN v1.1\n\n");
	for (int i = 1; i < argc; ++i)
	{
		if (!strcmp(argv[1], "-secret") || !strcmp(argv[1], "-s") || !strcmp(argv[1], "-S") || !strcmp(argv[1], "/S") || !strcmp(argv[1], "/s"))
		{
			printf("This is your own masterpiece\n");
		}
		else if (!strcmp(argv[1], "-backstroke") || !strcmp(argv[1], "-b") || !strcmp(argv[1], "-B") || !strcmp(argv[1], "/B") || !strcmp(argv[1], "/b"))
		{
			// backstroke (prequel memers don't know that our power will big outrun)
			printf("Did you heard of the tragedy that reach the man? I think to be too is not. I\n");
			printf("think that the hopeless situation elder also can't. That is a legend. Reaching\n");
			printf("the man cloth space is the emperor. He is so strong and big he even can use the\n");
			printf("original dint to create life. He is very deep to black influence understanding.\n");
			printf("The black influence can the matter that many supermans. But other people thinks\n");
			printf("that these are what can't attains. He become more and more strong and big. Lost\n");
			printf("his power afterwards afterwards he died. In fact he teaches own the whole skills\n");
			printf("all to disciple. Then his land killed him to let him going to bed. Satirizing\n");
			printf("the meaning is he can let other people, but is incapable for dint to the\n");
			printf("oneself.\n");
		}
		else
		{
			printf("special options:\n\n");
			printf("-secret (/s or -s): does exactly what it says\n");
			printf("-backstroke (/b or -b): same thing\n");
			#ifndef _WIN32
			printf("\n");
			#endif
		}
		return 0;
	}
	printf("Did you ever hear the tragedy of Darth Plagueis the wise?\n");
	printf("(Please answer with 'Y' or 'N'.)\n");
	char answer = getchar();
	if (answer == 'Y' || answer == 'y')
	{
		// prequel memer
		printf("\nWe will watch your career with great interest.\n");
	}
	else if (answer == 'N' || answer == 'n')
	{
		// normie
		printf("\nI thought not. It's not a story the Jedi would tell you. It's a Sith legend.\n");
		printf("Darth Plagueis was a Dark Lord of the Sith, so powerful and so wise he could\n");
		printf("use the Force to influence the midichlorians to create life... He had such a\n");
		printf("knowledge of the dark side that he could even keep the ones he cared about from\n");
		printf("dying. The dark side of the Force is a pathway to many abilities some consider\n");
		printf("to be unnatural. He became so powerful... the only thing he was afraid of was\n");
		printf("losing his power, which eventually, of course, he did. Unfortunately, he taught\n");
		printf("his apprentice everything he knew, then his apprentice killed him in his sleep.\n");
		printf("Ironic. He could save others from death, but not himself.\n");
	}
	else if (answer == 'B' || answer == 'b')
	{
		printf("\nnote: launch with \"-backstroke\" option next time\n");
	}
	else
	{
		// he's too dangerous to be left alive!
		printf("\nSo uncivilised.\n");
		#ifndef _WIN32
		printf("\n");
		#endif
		return 1;
	}
	#ifndef _WIN32
	printf("\n");
	#endif
	return 0;
}
