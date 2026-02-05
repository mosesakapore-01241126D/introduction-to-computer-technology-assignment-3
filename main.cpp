// Name: Akapore Moses
// Index Number: 01241126D
// Course: HND Electrical Engineering
// Course Code: Introduction to Computer Technology
// Assignment 3
// GitHub URL: (https://github.com/mosesakapore-01241126D/introduction-to-computer-technology-assignment-3)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Sum of two integers
int sumTwo(int x, int y)
{
    return x + y;
}

// 2. Count vowels in string
int countVowels(string str)
{
    int count = 0;
    for(int i=0;i<str.length();i++)
    {
        char c = tolower(str[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }
    return count;
}

// 3. Average of integers
double averageList(vector<int> list)
{
    int sum=0;
    for(int i=0;i<list.size();i++)
        sum += list[i];

    return (double)sum/list.size();
}

// 4. Remove vowels from sentence
string removeVowels(string sentence)
{
    string result="";
    for(int i=0;i<sentence.length();i++)
    {
        char c = tolower(sentence[i]);
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            result += sentence[i];
    }
    return result;
}

// 5. Longest string
string longestString(vector<string> list)
{
    string longest=list[0];
    for(int i=0;i<list.size();i++)
        if(list[i].length()>longest.length())
            longest=list[i];
    return longest;
}

// 6. Median value
double medianValue(vector<int> list)
{
    sort(list.begin(),list.end());
    int n=list.size();

    if(n%2==0)
        return (list[n/2-1]+list[n/2])/2.0;
    else
        return list[n/2];
}

// 7. Remove even numbers
vector<int> removeEven(vector<int> list)
{
    vector<int> result;
    for(int i=0;i<list.size();i++)
        if(list[i]%2!=0)
            result.push_back(list[i]);
    return result;
}

// 8. Sort strings alphabetically
vector<string> sortStrings(vector<string> list)
{
    sort(list.begin(),list.end());
    return list;
}

// 9. Sum of integers in list
int sumList(vector<int> list)
{
    int sum=0;
    for(int i=0;i<list.size();i++)
        sum+=list[i];
    return sum;
}

// 10. Reverse list of strings
vector<string> reverseStrings(vector<string> list)
{
    reverse(list.begin(),list.end());
    return list;
}

int main()
{
    cout<<"--- ASSIGNMENT 3 TEST OUTPUT ---"<<endl;

    cout<<"1. Sum: "<<sumTwo(12,8)<<endl;

    cout<<"2. Vowels: "<<countVowels("HND Electrical Engineering")<<endl;

    vector<int> nums={5,10,15,20,25};
    cout<<"3. Average: "<<averageList(nums)<<endl;

    cout<<"4. Remove Vowels: "<<removeVowels("Accra Technical University Student")<<endl;

    vector<string> words={"Nsakina","Electrical","Precious","Engineering"};
    cout<<"5. Longest String: "<<longestString(words)<<endl;

    vector<int> nums2={11,4,9,2,7};
    cout<<"6. Median: "<<medianValue(nums2)<<endl;

    vector<int> nums3={3,6,9,12,15,18};
    vector<int> odd=removeEven(nums3);
    cout<<"7. Odd Numbers: ";
    for(int i=0;i<odd.size();i++)
        cout<<odd[i]<<" ";
    cout<<endl;

    vector<string> sorted=sortStrings(words);
    cout<<"8. Sorted Strings: ";
    for(int i=0;i<sorted.size();i++)
        cout<<sorted[i]<<" ";
    cout<<endl;

    cout<<"9. Sum List: "<<sumList(nums)<<endl;

    vector<string> reversed=reverseStrings(words);
    cout<<"10. Reversed Strings: ";
    for(int i=0;i<reversed.size();i++)
        cout<<reversed[i]<<" ";
    cout<<endl;

    return 0;
}
