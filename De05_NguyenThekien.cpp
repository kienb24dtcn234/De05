#include<stdio.h>
int main(){
	int choice,size,soHoanHao;
	int arr[100];
	int phanTuMoi;
	int viTriXoa;
	int min;
	do{
		printf("\n\tMENU\n");
		printf("1.nhap phan tu va gia tri\n");
		printf("2.in ra cac gia tri trong mang\n");
		printf("3.so luong so hoan hao\n");
		printf("4.gia tri nho thu 2 trong mang\n");
		printf("5.them phan tu vao vi tri dau tien cua mang\n");
		printf("6.xoa phan tu tai vi tri : \n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.tim kiem phan tu trong mang\n");
		printf("9.sap xep va hien thi (so le dung truoc, so chan dung sau)\n");
		printf("10.dao nguoc thu tu cac phan tu va in ra toan bo mang\n");
		printf("11.thoat\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu ");
				scanf("%d", &size);
				for (int i = 0; i < size; i++) {
					printf("Nhap gia tri cho %d phan tu ", size );
					scanf("%d", &arr[i]); 
				}
				break;
			}
			case 2:
				if(size == 0) {
					printf("Mang rong\n"); 
				} else {
					printf("Gia tri cua cac phan tu trong mang la ");
					for (int i = 0; i < size; i++) {
                        printf("arr[%d] = %d, ", i, arr[i]); 
                    }
                    printf("\n"); 
				}	
				break;
			}
			break;
			case 3:
			   int count = 0;
                for (int i = 0; i < size; i++) {
                    int sum = 0;
                    for (int j = 1; j <= arr[i] / 2; j++) {
                        if (arr[i] % j == 0) {
                            sum += j;
                        }
                    }
                    if (sum == arr[i] && arr[i] > 1) {
                        count++;
                    }
                }
                printf("So luong cac so hoan hao trong mang: %d\n", count);
            }
			break;
			case 4:
			int min1, min2;
                if (arr[0] < arr[1]) {
                    min1 = arr[0];
                    min2 = arr[1];
                } else {
                    min1 = arr[1];
                    min2 = arr[0];
                }
                for (int i = 2; i < size; i++) {
                    if (arr[i] < min1) {
                        min2 = min1;
                        min1 = arr[i];
                    } else if (arr[i] < min2) {
                        min2 = arr[i];
                    }
                }
                printf("Gia tri nho thu 2 trong mang la: %d\n", min2);   
                break;
            }
			case 5:
			int newValue;
                    printf("Nhap gia tri phan tu can them ");
                    scanf("%d", &newValue);
                    arr[size] = newValue;
                    size++;
                    printf("Phan tu da duoc them vao mang\n");
			break;
		}
			case 6:
				printf("vi tri muon xoa : ");
				scanf("%d",viTriXoa);
				for(int i=viTriXoa;i<size-1;i++){
					arr[i]=arr[i+1];
				}
				--size;
				
			break;
			case 7:
				for(int i=0;i<size;i++){
					min=i;
					for(int j=i-1;j<size;j++){
						if(arr[min]>arr[j]){
							min = j;
						}
					}
					int temp=arr[i];
					arr[i]=arr[min];
					arr[min]=temp;
				}
			break;
			case 10:
				
			break;
			case 11: 
				printf("Thoat chuong trinh\n"); 
				break;
			}
			default:
                printf("Lua chon khong hop le, vui long chon lai\n");
                break;
		}
	}while(choice!=11);
	

	return 0;
}

