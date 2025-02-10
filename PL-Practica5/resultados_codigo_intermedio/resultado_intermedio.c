#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(){
int n, curr, ultim, cuenta, primero;

{
	printf("Introduce un número: ");
}
{
	scanf("%d", &n);
}
{
	printf(" %d == ", n);
}
{
	curr = 2;
}
{
	ultim = 0;
}
{
	cuenta = 0;
}
{
	primero = 1;
}
{
	etiqueta2:
	{
		{
			bool temp1;
			temp1 = curr <= n;
			
			if (!temp1) goto etiqueta1;
		}

		{
			int d;
			
			{
				int temp2;
				temp2 = n / curr;
				d = temp2;
			}
			{
				int temp3;
				temp3 = d * curr;
				bool temp4;
				temp4 = (temp3) == n;
				
				if (!temp4) goto etiqueta3;
				{
					{
						
						{
							bool temp5;
							temp5 = curr != ultim;
							
							if (!temp5) goto etiqueta5;
							{
								{
									
									{
										ultim = curr;
									}
									{
										cuenta = 1;
									}
								}

							}
							goto etiqueta6;

							etiqueta5:							
							{
								{
									
									{
										int temp6;
										temp6 = cuenta + 1;
										cuenta = temp6;
									}
								}

							}
							
							etiqueta6: {} 
						}
						{
							int temp7;
							temp7 = n / curr;
							n = temp7;
						}
					}

				}
				goto etiqueta4;

				etiqueta3:				
				{
					{
						
						{
							bool temp8;
							temp8 = cuenta > 0;
							
							if (!temp8) goto etiqueta7;
							{
								{
									
									{
										bool temp9;
										temp9 = primero == 0;
										
										if (!temp9) goto etiqueta9;
										{
											{
												
												{
													printf(" * ");
												}
											}

										}
										goto etiqueta10;

										etiqueta9: {}
										
										etiqueta10: {} 
									}
									{
										primero = 0;
									}
									{
										printf(" %d ", curr);
									}
									{
										bool temp10;
										temp10 = cuenta > 1;
										
										if (!temp10) goto etiqueta11;
										{
											{
												
												{
													printf("^ %d ", cuenta);
												}
											}

										}
										goto etiqueta12;

										etiqueta11: {}
										
										etiqueta12: {} 
									}
								}

							}
							goto etiqueta8;

							etiqueta7: {}
							
							etiqueta8: {} 
						}
						{
							int temp11;
							temp11 = curr + 1;
							curr = temp11;
						}
						{
							cuenta = 0;
						}
					}

				}
				
				etiqueta4: {} 
			}
		}

		goto etiqueta2;

	}
	etiqueta1: {}
}
{
	bool temp12;
	temp12 = cuenta > 0;
	
	if (!temp12) goto etiqueta13;
	{
		{
			
			{
				bool temp13;
				temp13 = primero == 0;
				
				if (!temp13) goto etiqueta15;
				{
					{
						
						{
							printf(" * ");
						}
					}

				}
				goto etiqueta16;

				etiqueta15: {}
				
				etiqueta16: {} 
			}
			{
				primero = 0;
			}
			{
				printf(" %d ", curr);
			}
			{
				bool temp14;
				temp14 = cuenta > 1;
				
				if (!temp14) goto etiqueta17;
				{
					{
						
						{
							printf("^ %d ", cuenta);
						}
					}

				}
				goto etiqueta18;

				etiqueta17: {}
				
				etiqueta18: {} 
			}
		}

	}
	goto etiqueta14;

	etiqueta13: {}
	
	etiqueta14: {} 
}
{
	printf("\n");
}
}

