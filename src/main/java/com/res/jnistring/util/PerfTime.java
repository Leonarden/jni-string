package com.res.jnistring.util;

public class PerfTime {
	
	private String cName;
	private long start;
	private long end;
	private String type;
	public PerfTime(String cname) {
		this.cName = cname;
	}

	
	public void startMillis() {
		type = "sM";
		start = System.currentTimeMillis();
	}
	public void endMillis() {
		end = -1;
		if(type.equals("sM"))
			end = System.currentTimeMillis();
		else
			start = -1;
	}
	public void startNano() {
		type = "sN";
		start = System.nanoTime();
	}

	public void endNano() {
		//todo erase if
		end = -1;
		if(type.equals("sN"))
			end = System.nanoTime();
		else
			start = -1;
	}

	
	public long getPerfTime() {
		return end - start;
	}
	
	public String getPerfTimeStr() {
		return cName + ": " + (end - start);
	}

	



}
