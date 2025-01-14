import requests

def check_instagram_login(session_cookies):
    url = "https://www.instagram.com/accounts/edit/"  # URL that requires login
    headers = {
        "User-Agent": "Chrome/91.0.4472.124"
    }

    # Create a session object
    session = requests.Session()

    # Set cookies in the session
    session.cookies.update(session_cookies)

    # Send a GET request to the URL
    response = session.get(url, headers=headers)

    if response.url == url:  # If the URL didn't redirect
        return "Logged in!"
    else:
        return "Not logged in!"

# Example usage
# Replace with your Instagram cookies (you can get them from browser developer tools -> Application -> Cookies)
example_cookies = {
    "sessionid": "your_sessionid_here",  # Replace with your actual sessionid cookie
    "csrftoken": "your_csrftoken_here",  # Replace with your actual csrftoken
}

status = check_instagram_login(example_cookies)
print(status)
