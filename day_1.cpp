#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * Complete the 'plusMinus' function below.
 *
 */
void plusMinus(vector<int> arr)
{
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    cout << setprecision(6) << ((float)pos / arr.size()) << endl
         << (float)neg / arr.size() << endl
         << (float)zero / arr.size();
}

/*
 * Complete the 'miniMaxSum' function below.
 *
 */

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    long long int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << sum - arr[arr.size() - 1] << " " << sum - arr[0];
}

/*
 * Complete the 'timeconversion' function below.
 *
 */

string timeConversion(string s)
{   //....................... case .........................
    // 12:00:00AM ............... 00:00:00 // all right "AM" formate withour this case..
    // 02:00:00AM ............... 02:00:00 // no change "AM" formate..
    // 12:00:00PM ............... 12:00:00 // all will change "PM" formate without this case..
    // 01:00:00PM ............... 13:00:00 // "PM" formate change...


    // 12:00:00AM
    string time_formate = s.substr(8, 2), time = s.substr(0, 8), hour = s.substr(0, 2), minute_second = s.substr(2, 6);
    if (time_formate == "AM")
    {
        if (hour == "12")
        {
            hour = "00";
            return hour + minute_second;
        }
        else 
        {
            return time;
        }
    }
    else 
    {
        if (hour == "12")
        {
            return time;
        }
        else 
        {

            return to_string((stoi(hour) + 12)) + minute_second;
        }
    }
}

int main()
{
    

    



    return 0;
}