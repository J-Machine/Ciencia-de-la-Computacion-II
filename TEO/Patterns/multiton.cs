using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Utility
{
    public sealed class  BackendServer
    {

        private static readonly Dictionary<int, BackendServer> serverPool = 
        new Dictionary<int, BackendServer>
        {
            {1,new BackendServer() { ServerName="Server 1", IPAddress="121.121.121.121" } },
            {2,new BackendServer() { ServerName="Server 2", IPAddress="121.125.129.122" } },
            {3,new BackendServer() { ServerName="Server 3", IPAddress="121.131.121.123" } }
        };
        private static readonly object _lock = new object();
        string ServerName { get; set; }
        string IPAddress { get; set; }

        public void Display()
        {
            Console.WriteLine("Request received by backend server{0}", ServerName);
        }
        private static readonly Random random = new Random();
        private static readonly object randomLock = new object();
        public static BackendServer GetAvailableBackendServer()
        {
            lock (randomLock)
            {
                int key = random.Next(1,(serverPool.Count+1));
                return serverPool[key];
            }
            
        }
    }
    class LoadBalancer
    {
        BackendServer ConnectToAvailableServer()
        {
            return BackendServer.GetAvailableBackendServer();
        }
        public void SericeRequest()
        {
            BackendServer instance=ConnectToAvailableServer();
            instance.Display();
        }
    }

    class ClientProgram
    {
        static void Main(string[] args)
        {
            LoadBalancer reqObj = new LoadBalancer();
            for(int i=1;i<=10;i++)
            reqObj.SericeRequest();
            Console.ReadKey();
        }
    }

}