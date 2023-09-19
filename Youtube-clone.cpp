#include<bits/stdc++.h>
using namespace std;

class Playlist
{
     public:
     	vector<string>play_list;
     	Playlist(string playlist_name)
     	{
     		play_list.push_back(playlist_name);
     		int no_of_videos;
     		string video;
     		cin>>no_of_videos;

     		for(int i = 0; i < no_of_videos; i++)
     		{
     			cin>>video;
     			play_list.push_back(video);
     		}
     	}
};

// creating a blueprint of a channel 
class Youtube
{
    protected:
    	int Subscribercnt = 0; 

    	vector<string>Subscribers;
    public:
    	string channel_name, channel_owner;

    	vector<Playlist>All_Playlists;
    public:

    	//method to set the channel name and owner of a youtube channel
    	void Create_Channel()
    	{
    		string ch_name, ch_own;
    		
    		cin>>ch_name;
    		cin>>ch_own;

    		channel_name = ch_name;
    		channel_owner = ch_own;
    	}

        /*method to access login credentials of a person so that username can be stored in
        the subscribers container*/ 

    	string login()
    	{
    		string user, password;
    		cin >> user;
    		cin >> password;
    		return user;
    	}

    	/*method to subscribe to the channel
    	The subscriber count will increase
    	and the username is stored in the Subscriber container
    	*/
    	void Subscribe()
    	{
    	    string username = login();
    		Subscribers.push_back(username);

    		Subscribercnt++;

    		cout << "You have successfully subscribed to this channel";

    		/*for(int i = 0; i < Subscribers.size(); i++)
    		{
    			cout << Subscribers[i] <<endl;
    		}*/

    	}

    	/*unsubscribe from the channel
    	check if you are a subscriber to the channel and then remove your username from container
    	*/
    	void Unsubscribe(string name)
    	{
            vector<string>::iterator it;

            it = find(Subscribers.begin(),Subscribers.end(),name);

            if(it != Subscribers.end())
            {
            	int index = it - Subscribers.begin();

            	Subscribers.erase(Subscribers.begin() + index);

            	Subscribercnt--;
            }
            else
            {
            	cout << "You have not subscribed to this channel"<<endl;
            }
    	}

    	//traverse and print the values present in each individual playlist from the collection
    	//of playlists
    	void Print_indiv_playlist(Playlist &obj)
    	{
    		cout << obj.play_list[0] << endl;

    		for(int i = 1; i < obj.play_list.size() ; i++)
    		{
    			cout << obj.play_list[i] << " ";
    		}
    		cout << endl;
    		cout << endl;
    	}

    	//Adding all the playlists from a channel into a container
    	void List_playlists(Playlist &obj)
    	{
            All_Playlists.push_back(obj); 
            //All_Playlists is a container that stores the Playlist object type
    	} 

    	
    	//Display the playlist title and the titles of videos present in the playlist
    	void Display_Playlists()
    	{
    		for(int i = 0; i < All_Playlists.size(); i++)
    		{
    			Print_indiv_playlist(All_Playlists[i]);
    		}
    	}
        

        // Display the information regarding a channel
    	void Display_Channel()
    	{
    		cout << "The Channel Name : " << channel_name << endl;
    		cout << "The owner of Channel : " << channel_owner << endl;
    		cout << "The number of subscribers : " << Subscribercnt << endl;
    	    cout << "The playlists present in the channel are : "<<endl;
    	    Display_Playlists();
    	}


};
int main()
{
    
    Youtube CH1;
    CH1.Create_Channel();

    Playlist CPP("CPP Tutorial");
    CH1.List_playlists(CPP);

    Playlist Python("Intro to Python");
    CH1.List_playlists(Python);


    CH1.Display_Channel();

}