int lowest = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i >= 1; i--)
    {
        if (arr[i - 1] > lowest)
        {
            arr[i] = arr[i - 1];
        }
        else if (arr[i - 1] < lowest)
        {
            arr[i] = lowest;
            for (int j = 0; j < arr.size(); ++j)
                cout << arr[j] << " ";
            cout << endl;
            break;
        }
        if(i == 1) {
           arr[0] = lowest; 
        }

        for (int j = 0; j < arr.size(); ++j)
            cout << arr[j] << " ";
        cout << endl;
    }