import java.io.*;
import java.util.Scanner;
import java.util.List;
import java.util.Hashtable;
import java.time.LocalDate;

public class Q01 {

    class Pokemon
    {
        private int id;
        private int generation;
        private String name;
        private String description;
        private List<String> types;
        private List<String> abilities;
        private double weight;
        private double height;
        private int captureRate;
        private boolean isLegendary;
        private LocalDate captureDate;

        public Pokemon()
        {
            this.id = -1;
            this.generation = -1;
            this.name = "";
            this.description = "";
            this.types = null;
            this.abilities = null;
            this.weight = -1;
            this.height = -1;
            this.captureRate = -1;
            this.isLegendary = false;
            this.captureDate = LocalDate.now();
        }

        public Pokemon(int id, int generation, String name, String description, List<String> types, List<String> abilities, double weight, double height, int captureRate, boolean isLegendary, LocalDate captureDate)
        {
            this.id = id;
            this.generation = generation;
            this.name = name;
            this.description = description;
            this.types = types;
            this.abilities = abilities;
            this.weight = weight;
            this.height = height;
            this.captureRate = captureRate;
            this.isLegendary = isLegendary;
            this.captureDate = captureDate;
        }

        // Getters
        public int getId()
        {
            return id;
        }

        public int getGeneration()
        {
            return generation;
        }

        public String getName()
        {
            return name;
        }

        public String getDescription()
        {
            return description;
        }

        public List<String> getTypes()
        {
            return types;
        }

        public List<String> getAbilities()
        {
            return abilities;
        }

        public Double getWeight()
        {
            return weight;
        }

        public Double getHeight()
        {
            return height;
        }

        public int getCaptureRate()
        {
            return captureRate;
        }

        public Boolean getIsLegendary()
        {
            return isLegendary;
        }

        public LocalDate getCaptureDate()
        {
            return captureDate;
        }

        // Setters
        public void setId(int id)
        {
            this.id = id;
        }

        public void setGeneration(int generation)
        {
            this.generation = generation;
        }

        public void setName(String name)
        {
            this.name = name;
        }

        public void setDescription(String description)
        {
            this.description = description;
        }

        public void setTypes(List<String> types)
        {
            this.types = types;
        }

        public void setAbilities(List<String> abilities)
        {
            this.abilities = abilities;
        }

        public void setWeight(Double weight)
        {
            this.weight = weight;
        }

        public void setHeight(Double height)
        {
            this.height = height;
        }

        public void setCaptureRate(int captureRate)
        {
            this.captureRate = captureRate;
        }

        public void setIsLegendary(Boolean isLegendary)
        {
            this.isLegendary = isLegendary;
        }

        public void setCaptureDate(LocalDate captureDate)
        {
            this.captureDate = captureDate;
        }

        // Print
        public void print()
        {
            System.out.print("[#"+ this.id + " -> " + this.name + ": " + this.description + " - ['" + this.types + "'] - " + this.weight + this.height + this.captureRate + this.isLegendary + this.generation + "] - " + this.captureDate);
        }

        // Read
        
    }


    public static void main(String args[])
    {
        File file = new File("pokemon.csv");
        Hashtable<Integer, Pokemon> htPokemon = new Hashtable<Integer, Pokemon>();

        try
        {
            Scanner scan = new Scanner(file);
            String line = null;
            String[] values = null;

            Pokemon pokemon = null;

            while(scan.hasNext())
            {
                line = scan.nextLine();
                values = line.split(",");
            }

            htPokemon.put(pokemon.getId(), pokemon);

            scan.close();
        }
        catch(FileNotFoundException e)
        {
            e.printStackTrace();
        }
    }
}
