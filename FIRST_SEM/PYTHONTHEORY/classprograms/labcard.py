details = input("""Enter your details: """)
name = details.split()[0].title().split('__')[0], details.split()[0].title().split('__')[1]
email = details.split()[1].lower()
phone = details.split()[2]
masked_phone = phone[:3] + "****" + phone[-4:]
is_valid = "Yes" if masked_phone[0].startswith('+') and '-' in details else "No"
initials = ''.join([part[0].upper() for part in details.split()[0].split('__') if part])
domain = email.split('@')[1] if '@' in email else "N/A"
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