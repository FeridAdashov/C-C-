simmetrik_sxem()
{
	char ch;
	do
	{
		int n, i, j;
		const float e = 2.718;
		cout << "N-in qiymetini daxil edin: ";
		cin >> n;
		float t[n], y[n], yx, tao = 1.0 / n;
		cout << "Funksiyanin sifir noqtesindeki qiymetini daxil edin: ";
		cin >> y[0];
		t[0] = 0;

		for(i = 0; i < n - 1; i++)
		{
			t[i + 1] = (i + 1) * tao;
			y[i + 1] = y[i] + tao * (pow(e, t[i] * t[i]) + 2 * t[i] * t[i] * pow(e, t[i] * t[i]));
			
		} 

		cout << "\nFunksiyanin qiymetleri: ";
		for(i = 0; i < n; i++) 
		    cout  << "\ny [ " << i << " ] = " << y[i];
		    
		
		for(i = 1; i < n; i++)
		{
			yx = t[i]  * pow(e, t[i] * t[i]) + 3;
			cout << "\n" << i << " - ci addimda xeta: " << abs(yx - y[i]);
		}
		
	
		cout << "\n\nYeni qiymetler hesablansin? ";
		cin >> ch;
	}while(ch == 'h');
	cout << endl;
	
}
