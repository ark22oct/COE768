# Computer Networks
Lab work for Computer Networks accomplished using C. Feel free to reference, but avoid copying.

Concentrates on the Internet technology. First introduces the OSI and TCP/IP network architecture models. Then studies the implementation principles and design issues at each layer of these models. Topics include: OSI and TCP/IP models, data transmission basics, data-link protocols, local area networks, wide-area networks, Internet structures, TCP/IP protocol suite, and application Layer protocols. Laboratory work focuses on the implementation of stop-and-wait protocol based on the BSD socket. In addition, we will gain practical experience by building and studying a physical network using network devices such as switches and routers.

# Project (Peer to Peer Network and Index Server) Overview

Socket APIs are fundamental in socket programming for establishing communication links between processes on a network. This project utilizes socket programming, TCP, and UDP protocols to facilitate communication among peers in a P2P network. The objective of this project is to develop a P2P application comprising an index server and multiple peers. The index server facilitates content exchange among peers, while content download occurs through a content server. The communication between the index server and peers is based on UDP, while content download is facilitated via TCP.

### Design Specifications

1. **Programming Requirements:** Defines the roles of different peers (Peer 1, Peer 2, Peer 3) and outlines the structure of Protocol Data Units (PDUs) used for communication.
2. **Implementation of Protocol:** Describes the PDUs used in the application and their functions.

 ### Program Breakdown

1. **Client Program:** Handles communication between a peer and the index server using UDP. Allows users to input commands based on the PDU format.
2. **Server Program:** Implements TCP and UDP protocols to manage index and content servers. Handles content registration, search, download, listing, and de-registration.
3. **Content Registration:** Peers register content with the index server, which then manages content availability.
4. **Content Search:** Peers search for content in the index server, which provides information about content servers.
5. **Content Download:** Peers download requested content from content servers using TCP.
6. **Content Listing:** Peers can request a list of registered content from the index server.
7. **Content De-Registration:** Peers can deregister content from the server when needed.



### State diagram for the server and client model of a Socket
<img width="500" alt="Screen Shot 2024-05-02 at 1 19 37 PM" src="https://github.com/ark22oct/Computer-Networks/assets/77360623/50c177d8-c554-4f66-a37e-500006c73e37">

### Peer to Peer mechanism
<img width="1000" alt="Screen Shot 2024-05-02 at 1 20 37 PM" src="https://github.com/ark22oct/Computer-Networks/assets/77360623/a365ce08-5cf2-4bad-a418-548d3250a19b">

### Table of various PDU types and their corresponding functions
<img width="1000" alt="Screen Shot 2024-05-02 at 1 21 50 PM" src="https://github.com/ark22oct/Computer-Networks/assets/77360623/609063ab-c0c4-4801-9cd2-37459a5aa694">

# Key Objectives
1. Uses analytical models to predict and control and networking components and processes
   behaviors.
   
2. Uses engineering knowledge to solve real world open-ended engineering problems. Uses
   the specialized core engineering knowledge in the field of computer networks to understand
   and design a various types of communication links and networks.
   
3. Uses the specialized core engineering knowledge in the field of computer networks to
   understand and design a various types of communication links and networks.
   
4. Generate solutions for complex engineering design problems.
   
5. Demonstrates iterative design process in complex engineering projects.
   
6. Writes and revises documents using appropriate discipline specific conventions.
   
7. Demonstrates confidence in oral communications and explains and interprets results
   clearly.
