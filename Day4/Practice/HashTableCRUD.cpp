/*Linear probing implementation*/

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Hashtable
{
    vector<int> Value;
    vector<int> Key;
    int n;

public:
    Hashtable()
    {
        cout << "Enter the number of key value pairs to be inserted" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            Value.push_back(-1);
            Key.push_back(-1);
        }
    }

    void insertMany()
    {
        int k, v;
        cout << "Insert the key value pairs" << endl;
        for (int i = 0; i < Value.size(); i++)
        {
            cin >> k >> v;
            int k1 = k;
            k = hashFunction(k);

            if (Value[k] == -1)
            {
                Value[k] = v;
                Key[k] = k1;
            }
            else
            {
                bool flag = false;
                while (1)
                {
                    k = (k + 1) % n;
                    if (Value[k] == -1)
                    {
                        Value[k] = v;
                        Key[k] = k1;
                        flag = true;
                        break;
                    }
                }
                if (flag != true)
                {
                    Value.push_back(v);
                    Key.push_back(k1);
                }
            }
        }
    }

    void insertOne()
    {
        int k, v;
        cout << "Insert the key value pairs" << endl;
        cin >> k >> v;
        for (int i = 0; i < Value.size(); i++)
        {
            int k1 = k;
            k = hashFunction(k);

            if (Value[k] == -1)
            {
                Value[k] = v;
                Key[k] = k1;
            }
            else
            {
                bool flag = false;
                while (1)
                {
                    k = (k + 1) % n;
                    if (Value[k] == -1)
                    {
                        Value[k] = v;
                        Key[k] = k1;
                        flag = true;
                        break;
                    }
                }
                if (flag != true)
                {
                    Value.push_back(v);
                    Key.push_back(k1);
                }
            }
        }
    }

    void retrieve()
    {
        int k;
        bool flag = false;
        cout << "Enter the key whose value is to be searched" << endl;
        cin >> k;
        int hash = hashFunction(k);
        // cout << "HASH :" << hash << endl;
        // cout << "KEY : " << k << endl;
        // cout << "KEY VALUE :" << Key[hash] << endl;
        for (int i = 0; i < Key.size(); i++)
            cout << Key[i] << " ";
        if (Key[hash] == k)
        {
            cout << "1 The value is " << Value[hash];
            flag = true;
        }
        else
        {
            int cnt = Key.size();
            while (cnt > 0)
            {
                hash = (hash + 1) % n;
                if (Key[hash] == k)
                {
                    cout << "The value is " << Value[hash] << endl;
                    flag = true;
                    break;
                }
                cnt--;
            }
        }
        if (flag == false)
            cout << "Key unavailable" << endl;
    }

    void remove()
    {
        int k;
        bool flag = false;
        cout << "Enter the key and value to be removed" << endl;
        cin >> k;
        int hash = hashFunction(k);
        for (int i = 0; i < Key.size(); i++)
            cout << Key[i] << " ";
        if (Key[hash] == k)
        {
            cout << Value[hash] << " was removed" << endl;
            Key[hash] = Value[hash] = -1;
            flag = true;
        }
        else
        {
            int cnt = Key.size();
            while (cnt > 0)
            {
                hash = (hash + 1) % n;
                if (Key[hash] == k)
                {
                    cout << Value[hash] << " was removed" << endl;
                    Key[hash] = Value[hash] = -1;
                    flag = true;
                    break;
                }
                cnt--;
            }
        }
        if (flag == false)
            cout << "Key unavailable" << endl;
    }

    void display()
    {
        cout << "The output is" << endl;
        for (int i = 0; i < Value.size(); i++)
            cout << Key[i] << " " << Value[i] << endl;
    }
    int hashFunction(int k)
    {
        return k % 10;
    }
};
using namespace std;
int main()
{
    Hashtable H;
    char choice;
    do
    {
        int n;
        cout << " 1 : Enter multiple key-value pairs \n 2 : Enter 1 key-value pair" << endl;
        cout << " 3: To retrieve data \n 4 : To delete data 5 : To display keys and values" << endl;
        cin >> n;
        Hashtable H;
        switch (n)
        {
        case 1:
            H.insertMany();
            break;
        case 2:
            H.insertOne();
            break;
        case 3:
            H.retrieve();
            break;
        case 4:
            H.remove();
            break;
        case 5:
            H.display();
            break;

        default:
            break;
        }
        cout << "Do you wish to continue? (Y/N)" << endl;
        cin >> choice;
    } while (choice == 'Y' or choice == 'y');
    H.insertMany();
    H.display();
    H.retrieve();
    return 0;
}