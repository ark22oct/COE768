# Computer Networks
Lab work for Computer Networks accomplished using C. Feel free to reference, but avoid copying.

Concentrates on the Internet technology. It first introduces the OSI and TCP/IP network architecture models. It then studies the implementation principles and design issues at each layer of these models. Topics include: OSI and TCP/IP models, data transmission basics, data-link protocols, local area networks, wide-area networks, Internet structures, TCP/IP protocol suite, and application Layer protocols. Laboratory work focuses on the implementation of stop-and-wait protocol based on the BSD socket. In addition, we will gain practical experience by building and studying a physical network using network devices such as switches and routers.

# Project (Peer to Peer Network and Index Server) Overview

Revolves around the development of a Peer-to-Peer (P2P) application with an index server and multiple peers exchanging content. The communication between the index server and peers utilizes UDP, while content download occurs over TCP. 

#### Let's break down the project components:

1. Background: Provides an overview of socket programming, TCP, and UDP, highlighting their roles in network communication.
2. Introduction: Describes the objective of the project, which is to create a P2P application using a combination of UDP and TCP protocols. The application involves peers registering and retrieving content through the index server.
3. Design Specifications: Outlines the programming requirements, including the roles of different peers and the structure of Protocol Data Units (PDUs) used for communication.
4. Implementation of Protocol: Describes the PDUs used in the application and their functions.
5. Program Breakdown: Details the purpose of client and server programs, including content registration, search, download, listing, and de-registration.
6. Observations and Analysis: Provides insights into the functionality of the implemented code, including successful operations and encountered errors like segmentation faults.
7. Conclusion: Summarizes the project's achievements and the practical application of TCP, UDP, and socket programming concepts, despite encountering errors during the download component.
Overall, the project demonstrates the development of a basic P2P application leveraging socket programming principles and TCP/UDP protocols, showcasing the intricacies involved in peer communication and content exchange over a network.

### State diagram for the server and client model of a Socket
<img width="230" alt="Screen Shot 2024-05-02 at 1 19 37 PM" src="https://github.com/ark22oct/Computer-Networks/assets/77360623/50c177d8-c554-4f66-a37e-500006c73e37">

### Peer to Peer mechanism
<img width="466" alt="Screen Shot 2024-05-02 at 1 20 37 PM" src="https://github.com/ark22oct/Computer-Networks/assets/77360623/a365ce08-5cf2-4bad-a418-548d3250a19b">

### Table of various PDU types and their corresponding functions
<img width="462" alt="Screen Shot 2024-05-02 at 1 21 50 PM" src="https://github.com/ark22oct/Computer-Networks/assets/77360623/609063ab-c0c4-4801-9cd2-37459a5aa694">
