#include <stdio.h>
#include <string.h>

int main() {
	char smallest_word[100], largest_word[100];
   	int i = 0;
   	char word[100];
   	while(1)
	{
      		printf("Enter word: ");
       		scanf("%s", word);
       		if(i == 0)
		{
          		strcpy(smallest_word, word);
           		strcpy(largest_word, word);
       		}
       		else 
		{
           		if(strcmp(word, smallest_word)<0) 
			{
               			strcpy(smallest_word, word);
           		}
           		if(strcmp(word, largest_word)>0) 
			{
               			strcpy(largest_word, word);
           		}
       		}	
       		if(strlen(word)==4)
		{
           		break;
       		}	
       		i++;
   	}
   	printf("\nSmallest word: %s\n", smallest_word);
   	printf("Largest word: %s\n", largest_word);
}
