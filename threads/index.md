# Threads
## Idea
### Single threading (normal)
![single threading](single_threading.jpeg)
### Multi threading 
![multi threading](multi_threading.jpeg)
### When to use & Why (examples)
1. when doing different things at the same time.
2. multi-threaded webserver
- NO multi-threading:  
 Web server handles HTTP request (visitors) one at a time,  
 blocking other visitors.
- with multi-threading:  
Each HTTP request (visitor) is handled by a seperate thread, simulataneously. 
So multiple visitors can access the web server at the same time. 
3. used to optimize performance in general  
 When u have multiple CPU cores, different threads can run on different CPU cores at the same time.  

## Code
## Edge Cases
