 int loop; cin >> loop;  
              int a[loop]; 
                 for(int i=0; i<loop; i++) 
                      cin >> a[i];
            
              int result = 0;
              for(int i=0; i<loop; i++) {
                 int c = 0;
                 if (a[i] % 2 != 0) {
                     cout << 0 << endl;
                     return 0 ;
                 }
                     while(a[i] % 2 == 0) {
                         c++;
                         a[i]/=2;
                     }
                     if (i == 0 || c < result) {
                         result = c;
                     }
             }
                 cout << result << endl;