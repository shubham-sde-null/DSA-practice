#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class TrieNode
{
public:
    char data;
    TrieNode *childNodes[26];
    bool isterminal;
    TrieNode(char ch)
    {
        data = ch;
        // when I got the first character at that time I will make the all 26 index as null
        for (int i = 0; i < 26; i++)
        {
            childNodes[i] = NULL;
        }
        isterminal = false;
    }
};
class Trie
{
public:
    // here I have made a pointer of Trinode data type
    TrieNode *root;
    Trie()
    {
        // here I have given the null character to the root node
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        // here I am saying if the string is traversed then make the last character as the terminal
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }
        // assumption word will be in caps or small caps depending upon the question, I have to process the first character of word by doing this is will get the index for that value
        int index = word[0] - 'a';
        // hume har ek node banate jani hai jab bhi koi node ayga
        TrieNode *child;
        // if character is present then go ahead
        if (root->childNodes[index] != NULL)
        {
            // if the character is present then I am taking it to the character
            child = root->childNodes[index];
        }
        // if the character is absent then I will make the entry for that character
        else
        {
            // agar jo character maine dala hai woh present nhi hai toh mai pehle woh node banaunga and then root k array k andar daal dunga
            child = new TrieNode(word[0]);
            root->childNodes[index] = child;
        }
        // recussioin call kar diya  is baar root ka kaam ho gaya mai child tak pahonch gaya abb yaha se age jaya jyga and one more thing I have to pass the second word for that I have used the substr
        insertUtil(child, word.substr(1));
    }
    // yeh function k andar ek word ayga aur woh insert karne ka kaam karega
    void insertWord(string word)
    {
        insertUtil(root, word);
    }
    // seach functionality
    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            // here I saying the whole word is traversed and then I will check If the isterminal is true or false if it is true then it means the word is present else it is not present here I am returning true or false in the base condition
            return root->isterminal;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->childNodes[index] != NULL)
        {
            child = root->childNodes[index];
        }
        else
        {
            // if the word is not present then return false because I don't found the word
            return false;
        }
        // call the c=recurssion
        return searchUtil(child, word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
    bool removeUtil(TrieNode *root, string word)
    {
        // base condition if I reached at the end of string and the isterminal is true then make it false such that when I will check the word next time and when it get treaversed it's last character will not be terminal so it will return false
        if (word.length() == 0)
        {
            if (root->isterminal == true)
            {
                root->isterminal = false;
            }
        }
        int index = word[0] - 'a';
        TrieNode *child;

        if (root->childNodes[index] != NULL)
        {
            child = root->childNodes[index];
        }
        else
        {
            return false;
        }
        // call the recurssion
        return removeUtil(child, word.substr(1));
    }
    bool removeWord(string word)
    {
        return removeUtil(root, word);
    }
};
int main()
{

    Trie *t = new Trie();
    t->insertWord("abcd");
    cout << "hello" << endl;
    cout << "present or not:" << t->searchWord("abcd") << endl;
    cout << "the string is present:" << t->removeWord("abcd");
    return 0;
}