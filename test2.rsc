:global funcWifi do={
	/interface wireless{
		:foreach i in=[find (band~"5ghz")] do={:put test1};
		:foreach i in=[find (band~"2ghz")] do={:put test2};
	}
}