 int uniqe=0;
        for(int i=0;i<Size;i++){
            uniqe=uniqe^arr[i];
            cout<<"*******"<<uniqe<<"******"<<endl;
        }
        return uniqe;