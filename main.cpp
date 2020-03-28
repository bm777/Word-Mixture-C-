#include <iostream>
#include <string>
#include <time.h>

using namespace std;

//Fonctions

string disorderWord(string word)
{
    //Local variable
    char tmp;
    int n = word.length(), p;

    while(n > 0)
    {
        p = rand() % n; //random position in the word
        tmp = word[p];
        word[p] = word[n-1];
        word[n-1] = tmp;
        n--;
    }
    return word;
}

//main function
int main()
{
    //VAriables
    string word, t, mixture;
    bool fnd(false); // found state

    //1 Getting a word
    cout << "Enter a word : "  << endl;
    cin >> word;

    //2 Mixture of the  word
    mixture = disorderWord(word);

    //3 Ask to find a right word
    while(!(fnd))
    {
        cout << "What is the word ? " << mixture << endl;
        cin >> t;
        if(t == word)
        {
            fnd = true;
            cout << "Bravo !" << endl;
        }
        else
        {
            cout << "It is not the word !\n" << endl;
        }
    }

    return 0;
}
