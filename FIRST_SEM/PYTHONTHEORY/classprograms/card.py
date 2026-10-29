name = input("Enter your name: ")
initials = ''.join([part[0].upper() for part in name.split() if part])
email = input("Enter your email: ")
domain = email.split('@')[1] if '@' in email else "N/A"
masked_phone = input("Enter your phone number (format: +countrycode-number): ")
is_valid = "Yes" if masked_phone.startswith('+') and '-' in masked_phone else "No"
card = f"""
{'='*30}
 PROFILE CARD
{'='*30}
 Name     : {name}
 Initials : {initials}
 Email    : {email}
 Domain   : {domain}
 Phone    : {masked_phone}
 Valid    : {is_valid}
{'='*30}
"""
print(card)