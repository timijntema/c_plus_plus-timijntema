##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=week_1_opdracht_2
ConfigurationName      :=Release
WorkspacePath          :=C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema
ProjectPath            :=C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Tim
Date                   :=28/04/2016
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=clang++
SharedObjectLinkerName :=clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="week_1_opdracht_2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := clang++
CC       := clang
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := llvm-as


##
## User defined environment variables
##
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/circle.cpp$(ObjectSuffix) $(IntermediateDirectory)/composition.cpp$(ObjectSuffix) $(IntermediateDirectory)/line.cpp$(ObjectSuffix) $(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) $(IntermediateDirectory)/window.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Release"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/circle.cpp$(ObjectSuffix): circle.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2/circle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/circle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/circle.cpp$(PreprocessSuffix): circle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/circle.cpp$(PreprocessSuffix) "circle.cpp"

$(IntermediateDirectory)/composition.cpp$(ObjectSuffix): composition.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2/composition.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/composition.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/composition.cpp$(PreprocessSuffix): composition.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/composition.cpp$(PreprocessSuffix) "composition.cpp"

$(IntermediateDirectory)/line.cpp$(ObjectSuffix): line.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2/line.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/line.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/line.cpp$(PreprocessSuffix): line.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/line.cpp$(PreprocessSuffix) "line.cpp"

$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix): rectangle.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2/rectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rectangle.cpp$(PreprocessSuffix): rectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rectangle.cpp$(PreprocessSuffix) "rectangle.cpp"

$(IntermediateDirectory)/window.cpp$(ObjectSuffix): window.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tim/Desktop/c_plus_plus-timijntema/Tim-IJntema/week_1_opdracht_2/window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/window.cpp$(PreprocessSuffix): window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/window.cpp$(PreprocessSuffix) "window.cpp"

##
## Clean
##
clean:
	$(RM) -r ./Release/


