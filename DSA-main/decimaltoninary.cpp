#include<bits/stdc++.h>
using namespace std;
class decbin{
    public:
        int n;
        string dectobin(int n)
        {
            string s = "";
            while (n > 0)
            {
                int no = (n % 2);
                s += to_string(no);
                n = n / 2;
            }
            int size = s.length();

            for (int i = 0; i < size / 2; i++)
                swap(s[i], s[size - i - 1]);
            return s;
}
};
int main(){
    decbin x;
    cout << "Enter a Number" << endl;
    int m;
    cin >> m;
    cout<<x.dectobin(m);
    return 0;
}

