using System;
using WikiDocLib;

namespace WikiDocCli
{
	public class Program
	{
		static void Main(string[] args)
		{
			WikiDocInfo info = ParseArgs(args);
			
			WikiDoc.MakeDocBook(info);
		}

		public static WikiDocInfo ParseArgs(string[] args)
		{
			WikiDocInfo info = new WikiDocInfo();
			
			if (args.Length < 2)
				throw new ArgumentException("Too few argumens " + args.Length.ToString());

			for (int i = 0; i < args.Length; i += 2 )
			{
				string argName = args[i];
				string argValue = args[i + 1];

				if (argName.StartsWith("-") && argValue.StartsWith("-"))
					throw new ArgumentException("Missing argument " + argName);
				switch (argName)
				{
					case "-wiki":
						info.wiki = argValue;
						break;
					case "-page":
						info.page = argValue;
						break;
					case "-outdir":
						info.outdir = argValue;
						break;
					case "-outtype":
						info.outtype = argValue;
						break;
					case "-encoding":
						info.encoding = argValue;
						break;
					case "-lang":
						info.lang = argValue;
						break;
					case "-outfile":
						info.outfile = argValue;
						break;
					case "-login":
						info.login = argValue;
						break;
					case "-password":
						info.password = argValue;
						break;
					
					
					default:
						throw new ArgumentException("Bad argument " + argName);
				}
			}
			return info;
		}
	}

}
