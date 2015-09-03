/** 
Name: <your name>
Eid: <your id>
*/


/*
account for ties with ascii values
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std; /// so we don't need to prefix cout,cin,endl methods with std

const int MAX_ARRAY_SIZE = 256; /// How big our max sized line can be


/** declare our functions */
char getHighestFrequency(char c[]);
int getFrequencyCount(const char c[], char matchChar);


/**
    Given a line, find the character with the highest occurence
*/
char getHighestFrequency(char line[]){
    /* your code here */
	// cout << line << "\n";
	char c;
	int max = 0;
	int temp = 0;
	int len = strlen(line);

    for(int x = 0; x < len; x++){
    	temp = getFrequencyCount(line, line[x]);
    	if(temp > max && isalpha(line[x])){
    		max = temp;
    		c = line[x];
    	}
    }
    cout << char(tolower(c)) << max << "\n";
	return c;
}


/**
    Given a character, count each occurrence of the char
*/
int getFrequencyCount(const char line[], char matchChar){
    int a = 0;
    int len = strlen(line);

    for(int x=0; x < len; x++){
    	if(tolower(line[x]) == tolower(matchChar)){
    		a++;
    	}
    }
    return a;
}

/* Read the input using cin.
   Use cout or printf to print the char and count.
   Remember that you must also create(and use) the method getHighestFrequency
*/
int main() {
	ifstream f("trumps.txt");
	string linez;
	char cstr[256];

	for (int i = 0; getline(f, linez); ++i){
		memset(cstr, 0, sizeof(cstr));
		linez.copy(cstr, linez.length()+1);
		getHighestFrequency(cstr);
	}
	cout<<"\n";
    return 0;
}

