public class Solution {
	public static void merge(int[] a,int s,int e){
		int mid=s+(e-s)/2;
		int n1=mid-s+1;
		int n2=e-mid;
		int a1[]=new int[n1];
		int a2[]=new int[n2];
		for(int i=0;i<n1;i++){
			a1[i]=a[s+i];
		}
		for(int j=0;j<n2;j++){
			a2[j]=a[mid+1+j];
		}
		int k=s;
		int i,j;
		i=j=0;
		while(i<n1 && j<n2){
			if(a1[i]<a2[j]){
				a[k++]=a1[i++];
			}else{
				a[k++]=a2[j++];
			}
		}
		while(i<n1){
			a[k++]=a1[i++];
		}
		while(j<n2){
			a[k++]=a2[j++];
		}
	}
	public static void mergesort(int[] a,int s,int e){
		if(s>=e){
			return;
		}
		int mid=s+(e-s)/2;
		mergesort(a,s,mid);
		mergesort(a,mid+1,e);
		merge(a,s,e);
	}
	public static void mergeSort(int[] arr, int n) {
		mergesort(arr,0,n-1);
	}
}
