:global funcWifi do={
	/interface wireless{
		:foreach i in=[find (band~"5ghz")] do={:put test1};
		:foreach i in=[find (band~"2ghz")] do={:put test2};
		:foreach i in=[/interface find (type="wlan")] do={:put test3};
	}
}