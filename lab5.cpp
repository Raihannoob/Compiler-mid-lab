#include<stdio.h> 
#include<string.h> 
#include<stdbool.h> 

bool checkSentence(char str[]) 
{ 
	// Calculate the length of the string. 
	int len = strlen(str);

    if (str[0] < 'A' || str[0] > 'Z') // Check if the first character is uppercase or not in the sentence
        return false;

    if (str[len - 1] != '.') //Check if the last character is a full stop or not
        return false; 
 
	int prev_state = 0, curr_state = 0; 

	int index = 1; 

	while (str[index]) 
	{ 
 
		if (str[index] >= 'A' && str[index] <= 'Z') 
			curr_state = 0; 

		else if (str[index] == ' ') 
			curr_state = 1; 

		else if (str[index] >= 'a' && str[index] <= 'z') 
			curr_state = 2; 

		else if (str[index] == '.') 
			curr_state = 3;

        if (prev_state == curr_state && curr_state != 2) //Two continuous upper case characters are not allowed
            return false; 

		if (prev_state == 2 && curr_state == 0) //current state upper case privious state lower case 
			return false; 

		if (curr_state == 3 && prev_state != 1) //current state . and privious " " na hoi
			return (str[index + 1] == '\0'); 

		index++; 

		prev_state = curr_state; 
	} 
	return false; 
} 

int main() 
{ 
	char *str[] = { "I love cinema.", "The vertex is S.", 
					"I am single.", "My name is KG.", 
					"I lovE cinema.", "GeeksQuiz. is a quiz site.", 
					"I love Geeksquiz and Geeksforgeeks.", 
					" You are my friend.", "I love cinema" }; 
	int str_size = sizeof(str) / sizeof(str[0]); 
	int i = 0; 
	for (i = 0; i < str_size; i++) 
	checkSentence(str[i])? printf("\"%s\" is correct \n", str[i]): 
							printf("\"%s\" is incorrect \n", str[i]); 

	return 0; 
} 

