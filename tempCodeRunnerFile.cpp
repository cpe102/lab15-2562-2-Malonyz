void randData(double  *dPtr,int N,int M){
	for (int i=0;i<(N*M);i++){
		*dPtr = double(rand()%100+1)/100;
		dPtr++;	

	}
}

void findRowSum(const double *dPtr,double *result,int N,int M){
	double sum;
	
	for(int i=0;i<N;i++){
		
		sum =0;
		for(int j=0;j<M;j++){
			
			 sum +=*dPtr;
			 dPtr++;

			
		}
		*(result+i) = sum;
		
		
	}

}
void showData(double *dPtr,int N,int M){
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cout << *dPtr<< " ";
			dPtr++;

		}
		cout <<"\n";
	}

}