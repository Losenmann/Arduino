:global funcWifi do={
	/interface wireless{
		:foreach i in=[find (band~"5ghz")] do={/interface bridge add name="test1"};
		:foreach i in=[find (band~"2ghz")] do={/interface bridge add name="test2"};
	}
}