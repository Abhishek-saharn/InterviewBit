string Solution::intToRoman(int number) {
   
        int num=number;     //3999
        string res="";
        if(number==0)return res;
        while(num>0){
            if(num>=1000){
                int x=num/1000; //x=3
                num=num%1000;   //num=999
                for(int i=0;i<x;i++){
                    res=res+"M";
                }
            }else if(num>=500){              //999 or 860
                if(num>=900){
                    res=res+"CM";
                    num=num%100;            //99 or 860
                }else{
                        int x=num/100;
                        int c=x%5;
                        res=res+"D";
                        for(int i=0;i<c;i++){
                            res=res+"C";
                        }
                        num=num%100;    //99 or 60
                }
            }else if(num>=100){              //499 or 260 
                if(num>=400){
                    res=res+"CD";
                    num=num%100;            //99 or 260
                }else{
                        int x=num/100;
                        for(int i=0;i<x;i++){
                            res=res+"C";
                        }
                        num=num%100;    //99 or 60
                }
            }else if(num>=50){              //99 or 60
                if(num>=90){
                    res=res+"XC";
                    num=num%10;            //9 or 60
                }else{
                        int x=num/10;
                        int c=x%5;
                        res=res+"L";
                        for(int i=0;i<c;i++){
                            res=res+"X";
                        }
                        num=num%10;    //9 or 0
                }
            }else if(num>=10){              //45 or 35
                if(num>=40){
                    res=res+"XL";
                    num=num%10;            //5 or 35
                }else{
                        int x=num/10;
                        for(int i=0;i<x;i++){
                            res=res+"X";
                        }
                        num=num%10;    //5 or 5
                }
            }else if(num>=5){              //9 or 6
                if(num==9){
                    res=res+"IX";
                    num=num%1;            //0 or 6
                }else{
                        int x=num/1;        
                        int c=x%5;
                        res=res+"V";
                        for(int i=0;i<c;i++){
                            res=res+"I";
                        }
                        num=num%1;    //0 or 0
                }
            
          }else if(num>=1){              //4 or 3
                if(num==4){
                    res=res+"IV";
                    num=num%1;            //0 or 3
                }else{
                        int x=num/1;
                        for(int i=0;i<x;i++){
                            res=res+"I";
                        }
                        num=num%1;    //0 or 0
                }
            }
        }
        return res;
        
}
