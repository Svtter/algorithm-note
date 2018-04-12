POJ 1852
=========

.. contents::



INPUT
------

    2
    10 3
    2 6 7
    214 7
    11 12 7 13 176 23 191


OUTPUT
------

    4 8
    38 207

CODE
-----


.. code:: cpp

    #include <iostream>
    #include <stdio.h>
    #include <string.h>
    #include <cmath>
    
    using namespace std;
    
    int ants[1000001];
    const int INF = 1000001;
    
    void test()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << ants[i] << endl;
        }
    }
    
    void solve_problem()
    {
        int pole, n;
        cin >> pole >> n;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ants[i]);
        }
    
        // 时间久了scanf忘记怎么写了，测试一下。。
        //test();
    
        int max = -INF;
        int dis;
        for (int i = 0; i < n; i++)
        {
            dis = pole - ants[i];
            dis = dis > ants[i] ? dis : ants[i];
            max = dis > max ? dis : max;
            //cout << "max: " << max << endl;
        }
    
        int min = 0;
        for (int i = 0; i < n; i++)
        {
            dis = pole - ants[i];
            dis = dis < ants[i] ? dis : ants[i];
            min = dis > min ? dis : min;
        }
    
        printf("%d %d\n", min, max);
    }
    
    int main()
    {
        int cases;
        cin >> cases;
    
        while(cases--)
        {
            memset(ants, 0, sizeof(ants));
            solve_problem();
        }
    
        return 0;
    }
