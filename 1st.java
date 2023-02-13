import java.util.*;
public
class Main
{
public
    static int recurs(int[] arrn, int start, int end, int val)
    {
        int k = arrn[(arrn.length) / 2], j, p;
        if (arrn[k] > val)
        {
            recurs(arrn[k] / 2, start, k / 2, val);
            return arrn[k];
        }
        else
        {
            recurs(arrn[k] / 2, k / 2, end, val);
            return arrn[k];
        }
    }
public
    static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value you wnat to find it ");
        int x = sc.nextInt();
        int flag = 0;
        int[] arr = {10, 20, 30, 40, 50};
        // for(int i=0;i<arr.length;i++){
        //     if(arr[i]==x){
        //         flag=1;
        //         break;
        //     }
        //     else
        //     flag =0;
        // }

        // if(flag==1){
        //     System.out.println("you got it");
        // }
        // else{
        //     System.out.println("you did not got it");
        // }
        int strt = 0, endd = arr.length;
        int[] arrr2 = {};

        if (x == arr[(arr.length) / 2])
        {
            System.out.println("value got at middle of the array");
        }
        else
        {
            int arr2[] = recurs(arr, strt, endd, x);
            System.out.println("you got it from recursiion");
        }
    }
}