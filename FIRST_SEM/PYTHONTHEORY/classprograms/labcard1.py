details = input("""Enter your details: """)
name = details.split()[0].title(), details.split()[1].lower().title()
email = details.split()[2].lower()
phone = details.split()[3]
masked_phone = "*********" + phone[-4:]
is_valid = "Yes" if phone.startswith('+') and '-' in phone else "No"
initials = ''.join([part[0].upper() for part in name])
domain = email.split('@')[1] if '@' in email else "N/A"
card = f"""
{'='*30}
PROFILE CARD
{'='*30}
 Name     : {name[0]} {name[1]}
 Initials : {initials}
 Email    : {email}
 Domain   : {domain}
 Phone    : {masked_phone}
 Valid    : {is_valid}
{'='*30}
"""
print(card)