#include "../Headers/Functions.h"
#include <stack>

using namespace std;

bool brackets(std::string& sequence)
{    
    if (sequence.empty())
        return true;

    for (int i = 0; i < sequence.length(); i++)
    {
        if (sequence[i] != ' ')
            break;
        if (i + 1 == sequence.length())
            return true;
    }
 
    stack<char> simbolos;
    int i = 0;
    while (sequence[i] != 0)
    {
       
        if (sequence[i] == '(' || sequence[i] == '[' || sequence[i] == '{')
        {
            simbolos.push(sequence[i]);
            i++;
        }
        else if (simbolos.empty())
        {
            i++;
            continue;
        }
        else if (sequence[i] == ')')
        {
            if (simbolos.top() == '(')
                simbolos.pop();
            i++;
        }
        else if (sequence[i] == ']')
        {

            if (simbolos.top() == '[')
                simbolos.pop();
            i++;
        }
        else if (sequence[i] == '}')
        {

            if (simbolos.top() == '{')
                simbolos.pop();
            i++;
        }
        else
            i++;
    }
	return simbolos.empty();
}

int findCombinations(std::string& a, std::string& b)
{
    if (a.length() > b.length() || a.empty() || b.empty())
        return 0;

    multiset<char> cA, cB;
    //copy(a.begin(), a.end(), cA.begin());
    //copy(b.begin(), b.end(), cB.begin());
    
    for (int i = 0; i < a.length(); i++)
        cA.insert(a[i]);

    for (int i = 0; i < b.length(); i++)
        cB.insert(b[i]);

    multiset<char>::iterator ib;
    int result=0;
    while (!cB.empty())
    {
        for (std::multiset<char>::iterator it = cA.begin(); it != cA.end(); it++)
        {
            ib = cB.find(*it);
            if (ib == cB.end())
                return result;
            cB.erase(ib);

        }
        result++;
    }
    return result;
}

double euclidianDistance(const Point& point1, const Point& point2)
{
    double cuadX = pow((double)point1.x - (double)point2.x,2);
    double cuadY = pow((double)point1.y - (double)point2.y,2);
    return sqrt(cuadX+cuadY);
}


