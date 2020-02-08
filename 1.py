import json

name = str(input("Nama: "))
age = input("Umur: ")
address = str(input("Alamat: "))

hobbies = []
option = str(input('Tambahkan Hobi Anda(ya/tidak)? : '))
if option == 'ya':
    num = int(input('Berapa Banyak Hobi Anda: '))
    for i in range(1, num+1):
        print('Hobi ke-', i)
        ele_h = [input()] 
        hobbies.append(ele_h)

def check(is_married): 
    return(bool(is_married=="Single"))
is_married = input("Status Pernikahan (Single/Menikah): ")
if(check(is_married)): 
    print("Single") 
else: 
    print("Menikah")
    
list_school = []
option = str(input('Tambahkan Pendidikan Anda(ya/tidak)? : '))
if option == 'ya':
    num = int(input('Jumlah Pendidikan Terakhir: '))
    print('masukkan data dengan format\nnama sekolah:\ntahun masuk:\ntahun keluar:\njurusan:')
    for i in range(1, num+1):
        print('Data Sekolah/Universitas ke-', i)
        ele_sh = [input(), int(input()),int(input()), input()] 
        list_school.append(ele_sh)

    
skills = []
option = str(input('Tambahkan Keahlian Anda(ya/tidak)? : '))
if option == 'ya':
    num = int(input('Jumlah yang akan disebutkan: '))
    print('masukkan data dengan format\nnama Keahlian:\nlevel(pemula,menengah,ahli)')
    for i in range(1, num+1):
        print('Data Keahlian ke-', i)
        ele_sk = [input(), input()] 
        skills.append(ele_sk)

    
def checkk(interest_in_coding): 
    return(bool(interest_in_coding=="Ya"))
interest_in_coding = input("Tertarik dengan Pemograman (Ya/Tidak): ")
if(checkk(interest_in_coding)): 
    print("Ya") 
else: 
    print("Tidak")
    
    
    


myjsonfile = {
  "name": name,
  "age": age,
  "address": address,
  "hobbies": hobbies,
  "is_married": is_married,
  "list_school": list_school,
  "skills": skills,
  "interest_in_coding": interest_in_coding,
}

print(json.dumps(myjsonfile))
with open('jejsonfile.json', 'w') as outfile:
    json.dump(myjsonfile, outfile)