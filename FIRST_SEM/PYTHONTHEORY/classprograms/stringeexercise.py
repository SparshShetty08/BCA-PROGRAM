string1 = '''sachin__KUMAR \n sachin@GOOGLE.COM \n +91-1234-5684-11'''
print('NAME: \n', string1.split()[0].title().split('__')[0], string1.split()[0].title().split('__')[1] )
print('EMAIL: \n', string1.split()[1].lower())
print('MOBNUMBER: \n', string1.split('+')[1].split('-')[0],string1.split('-')[1],string1.split('-')[2],string1.split('-')[3]) 
NAME = string1.split()[0].title().split('__')[0], string1.split()[0].title().split('__')[1]
EMAIL = string1.split()[1].lower()
MOBNUMBER = string1.split('+')[1].split('-')[0],string1.split('-')[1],string1.split('-')[2],string1.split('-')[3]
print('NAME: \n', NAME)
print('EMAIL: \n', EMAIL)
print('MOBNUMBER: \n', MOBNUMBER)