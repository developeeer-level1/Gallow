#include <vector>

class Mode {
	bool mode;
	int probabilityWord;
	vector<string> words;
public:
	Mode(int mode) {
		probabilityWord = 0;
		srand(time(0));
		this->mode = mode;
		switch (this->mode)
		{
		case 0:
			words = {
				"Conditions", "Pickme", "Venom", "Spider",
				"Abayudna", "Bebra", "Trollface", "Pdiddy", "Lmao", "Vibing", "Noob", "Flex", "SUS", "Amogus",
				"Kek", "Lol", "Bruh", "Ambatukam", "Doge", "Rickroll", "Simp", "Triggered", "Gigachad", "Karen", "Misha",
				"Kakish", "Tiktok", "Chillguy", "Roblox", "Meme", "Sussy", "Stonks", "Zoomer", "Carphique", "Lizarklaun",
				"Cocomelon", "Mrbeast", "Fiasko"
			};
			probabilityWord = rand() % words.size();
			break;


		case 1:

			words = {
				"Imagine", "Selection", "Trial", "Freighter", "Overlook", "Courtesy", "Practical", "Discreet", "Robot",
				"Pain", "Debut", "Like", "Convert", "Spine", "Health", "Season", "Economic", "Appendix", "Red",
				"Vat", "Ghostwriter", "Stool", "Snail", "Retiree", "Seal", "Hell", "Ignorant", "Hair", "Triangle",
				"Measure", "Exercise", "Guitar", "Circle", "Kick", "Grandfather", "Passion", "Create", "Construct", "Sell",
				"Clarify", "Expose", "Oral", "Cut", "Cellar", "Silence", "Tablet", "Soft", "Neglect", "Polish", "Norm",
				"Truth", "Delivery", "Competition", "Guidance", "Advertising", "Paper", "Farmer", "Explanation",
				"Surgery", "Activity", "Grandmother", "Mixture", "Depression", "Reflection", "Childhood", "Analysis",
				"Agency", "Criticism", "Complaint", "Significance", "Knowledge", "Library", "Role", "Owner", "Climate",
				"Attention", "Area", "Apartment", "President", "Desk", "Inspection", "Description", "Discussion",
				"Painting", "Supermarket", "Fact", "Depth", "Winner", "Baseball", "Transportation", "Lake", "Tongue",
				"Wood", "Basket", "Obligation", "Dirt", "Basis", "Procedure"
			};
			probabilityWord = rand() % words.size();
			break;
		case 2:
			words = {
				"Algorithm", "Binary", "Bug", "Code", "Compiler", "Debugger", "Function", "Loop", "Object", "Pointer",
				"Recursion", "Stack", "Heap", "Array", "Class", "Variable", "Git", "Repository", "Commit", "Branch",
				"Merge", "ArrayList", "Interface", "Thread", "Concurrency", "Refactor", "Exception", "TryCatch", "API",
				"Framework", "Library", "Module", "Server", "Client", "Frontend", "Backend", "NodeJS", "React", "Vue",
				"JavaScript", "Python", "Java", "CSharp", "Ruby", "GoLang", "Rust", "Swift", "Kotlin", "TypeScript",
				"SQL", "NoSQL", "Database", "MongoDB", "MySQL", "PostgreSQL", "Docker", "Kubernetes", "DevOps",
				"Test", "UnitTest", "IntegrationTest", "TDD", "BDD", "GitHub", "Bitbucket", "Jenkins", "Azure", "AWS",
				"Cloud", "VirtualMachine", "Container", "RESTAPI", "GraphQL", "OAuth", "JWT", "Authentication", "Authorization",
				"Security", "Encryption", "Decryption", "HTTP", "HTTPS", "Protocol", "Endpoint", "Socket", "WebSocket",
				"IDE", "VSCode", "Eclipse", "IntelliJ", "Debugger", "Breakpoint", "HotReload", "Refactoring", "CleanCode"
			};
			probabilityWord = rand() % words.size();
			break;
		default:
			break;
		}
	};
	string Returner() {
		return words[probabilityWord];
	}


};
