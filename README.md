# safecabinet
for bostonhacks

Inspiration
As technology is such an integral part of our daily lives, especially because of coronavirus-related restrictions and concerns, it’s no surprise that consumers are increasingly converting their homes into “smart homes.” The $78.3 billion market are set to grow to $135.5 billion by 2025. Makes sense, given that more families are staying at home for longer periods because of the pandemic, so the comfort and convenience that smart homes provide is even more appealing – and more in demand. This entails embracing the Internet of Things, meaning connecting as many devices, home appliances, and belongings as possible (even your pet’s food dish!) to the internet so they’ll synchronize with each other and be activated with just a touch of an app. When it comes to connected things, the sky’s the limit. While the concept of smart homes undoubtedly makes life more convenient, there are downsides to surrounding yourself with – and relying on – so much digital technology. Some smart home-owners are realizing that raising one’s level of comfort may come at the expense of reduced privacy.

What it does
Smart homes greatly enhance people’s levels of safety. By being able to easily turn off any smart appliances from your phone – within seconds – there’s no more reason to panic when you’re out of the house and suddenly realize that you’ve left the oven on. (Some smart appliances have been designed to turn themselves off when not in use.) For greater security, you can remotely lock any home doors you forgot to lock. You can also use smart appliances to monitor your home – and your loved ones inside. Automated technology offers peace of mind to parents about caretakers or loved ones left by themselves.

Safesmart offers an ideal way by using Software (website) and Hardware (IoT setup) technologies to do this. We focused on many features like:- 1) Child cabinet lock system- There is a perimeter of 1m around a cabinet that would be sensed by using Ultrasonic Sensor Servo motor and NodeMCU, if an intruder(any child, person, or pets) detects then, an alert pop-up on the website and simultaneously Cam is ON. So, it will in the user’s hand to unlock the cabinet or remains locked. 2) Access History- There is a list of the last accessed users to access the different appliances. 3) Automatic and manual mode for control lights, fan, and other appliances 4) Voice Command Control feature

How I built it
With the help of NodeNCU, we build a hardware setup and perform IoT. Using a mobile adapter we powered the NodeMCU and through the Relay module, we control AC appliances. Ultrasonic Sensor (HC SR04) and Servo motor used to sense 1m perimeter. Blynk and IFTTT used for controlling appliances through mobile and Voice Command. The backend software is written in python and we use the ClariFai API demographics filter to determine if the the image taken by the system contains a child or not. we use this output to determine whether to automatically lock the cabinet. The image file taken by the system is uploaded to a google cloud storage bucket and this also forms the basis of tracking the last access to the cabinet and maintaining a visual log of past accesses.

Challenges we ran into
Complete the project with available electronics hardware components. In the last moment, there was a spark in our hardware setup and it was on fire, due to which out setup became unusable. But luckily, we have some demo video clips showing our project functionality upto the point we described.

Accomplishments that we're proud of
Real-time implementation of IoT in the house and make it Smart Home.

What we learned
Use Voice Command feature with IoT through IFTTT which is new and able to send pictures through Cam programmatically to Website.

What's next for Safesmart
In terms of enhancing the project, we will try to add some more features to it
