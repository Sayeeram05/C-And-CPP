#include<iostream>
#include<string>

using namespace std;
void ch_letter(string word)
{
    char letter,r_letter;
    cout<<"Which letter you want to repalce : ";
    cin>>letter;
    cout<<letter<<" Replace to : ";
    cin>>r_letter;
    int l = word.size();
    for(int i = 0 ; i<l ; i++)
    {
        if(word[i] == letter)
        {
            word[i] = r_letter;
        }
    }
    cout<<"Letter has been replaced : "<<word; 
};

void del_letter(string word)
{
    char letter;
    cout<<"Enter a letter : ";
    cin>>letter;
    int l = word.size();
    for(int i = 0 ; i<l ; i++)
    {
        if(word[i] == letter)
        {
            word[i] = 0;
        }
    }
    cout<<"Letter has been deleted : "<<word;
};

string rev_word(string word)
{
    string temp;
    for(int i = ((word.size()) - 1) ; i>=0 ; i--)
    {
        temp = temp + word[i];
    }
    return temp;
};
int main()
{
    string word,sub;
    char option;
    cout<<"Enter a word : ";
    getline(cin,word);
    loop:
    cout<<"Choose the option:";
    cout<<"\n1. Change the letter\n2. Change the word\n3. delete the letter\n4. Reverse the word\n"
        <<"5. Add letter at last\n6. Delete last letter\n";
    cout<<"Enter the option (1/2/3/4/5/6) : ";
    cin>>option;
    if(option == '1')
    {
        ch_letter(word);
    }
    else if(option == '2')
    {
        cout<<"Enter the replacing word : ";
        cin>>sub;
        word = sub;
        cout<<"Word as been replaced as "<<word;
    }
    else if(option == '3')
    {
        del_letter(word);
    }
    else if(option == '4')
    {
        cout<<word<<" Reversed as "<<rev_word(word);
    }
    else if(option == '5')
    {
        char l;
        cout<<"Enter a letter : ";
        cin>>l;
        word.push_back(l);
        cout<<"Letter is added : "<<word;
    }
    else if(option == '6')
    {
        word.pop_back();
        cout<<"Last letter is deleted : "<<word;
    }
    else
    {
        cout<<"Worng option\n";
        goto loop;
    }
}